import * as THREE from 'three';
import { OrbitControls } from 'three/addons/controls/OrbitControls.js';

export default function main(containerId) {
  const container = document.getElementById(containerId);

  const scene = new THREE.Scene();
  scene.background = new THREE.Color(0xffffff);

  const camera = new THREE.PerspectiveCamera(75, window.innerWidth / window.innerHeight, 0.1, 1000);
  camera.position.set(3, 3, 5);

  const renderer = new THREE.WebGLRenderer({ antialias: true });
  renderer.setSize(window.innerWidth, window.innerHeight);
  container.appendChild(renderer.domElement);

  // Eixos de -2 a 2 (o AxesHelper só desenha a parte positiva)
  const tamanho = 2;
  const eixos = [
    { dir: new THREE.Vector3(1, 0, 0), cor: 0xff0000 }, // X vermelho
    { dir: new THREE.Vector3(0, 1, 0), cor: 0x00aa00 }, // Y verde
    { dir: new THREE.Vector3(0, 0, 1), cor: 0x0000ff }, // Z azul
  ];
  for (const { dir, cor } of eixos) {
    const geometria = new THREE.BufferGeometry().setFromPoints([
      dir.clone().multiplyScalar(-tamanho),
      dir.clone().multiplyScalar(tamanho),
    ]);
    scene.add(new THREE.Line(geometria, new THREE.LineBasicMaterial({ color: cor })));
  }

  const controls = new OrbitControls(camera, renderer.domElement);

  window.addEventListener('resize', () => {
    camera.aspect = window.innerWidth / window.innerHeight;
    camera.updateProjectionMatrix();
    renderer.setSize(window.innerWidth, window.innerHeight);
  });

  function animate() {
    requestAnimationFrame(animate);
    controls.update();
    renderer.render(scene, camera);
  }
  animate();
}
