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

  // Vértices: base quadrada em y = 0 e topo em y = 1.5
  const vertices = new Float32Array([
    -1, 0, -1, // 0
     1, 0, -1, // 1
     1, 0,  1, // 2
    -1, 0,  1, // 3
     0, 1.5, 0, // 4 topo
  ]);

  // Faces (triângulos) com os índices em sentido anti-horário vistos de fora
  const faces = [
    0, 1, 2,  0, 2, 3, // base (dois triângulos)
    3, 2, 4,           // frente  (z+)
    2, 1, 4,           // direita (x+)
    1, 0, 4,           // trás    (z-)
    0, 3, 4,           // esquerda (x-)
  ];

  const geometria = new THREE.BufferGeometry();
  geometria.setAttribute('position', new THREE.BufferAttribute(vertices, 3));
  geometria.setIndex(faces);

  // Um grupo por face, para cada uma ter a sua cor
  geometria.addGroup(0, 6, 0);
  geometria.addGroup(6, 3, 1);
  geometria.addGroup(9, 3, 2);
  geometria.addGroup(12, 3, 3);
  geometria.addGroup(15, 3, 4);

  const cores = [0x888888, 0xff0000, 0x00aa00, 0x0000ff, 0xffaa00];
  const materiais = cores.map((cor) => new THREE.MeshBasicMaterial({ color: cor }));
  scene.add(new THREE.Mesh(geometria, materiais));

  // Arestas a preto para se distinguirem as faces
  const arestas = new THREE.EdgesGeometry(geometria);
  scene.add(new THREE.LineSegments(arestas, new THREE.LineBasicMaterial({ color: 0x000000 })));

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
