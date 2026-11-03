import * as THREE from 'three';
import { OrbitControls } from 'three/addons/controls/OrbitControls.js';

const scene = new THREE.Scene();
scene.background = new THREE.Color(0x000000);

const camera = new THREE.PerspectiveCamera(45, window.innerWidth / window.innerHeight, 0.1, 100);
camera.position.set(0, 0, 5);

const renderer = new THREE.WebGLRenderer({ antialias: true });
renderer.setSize(window.innerWidth, window.innerHeight);
document.body.appendChild(renderer.domElement);

const controls = new OrbitControls(camera, renderer.domElement);

scene.add(new THREE.AmbientLight(0xffffff, 0.6));
const luz = new THREE.DirectionalLight(0xffffff, 1.0);
luz.position.set(2, 3, 4);
scene.add(luz);

const loader = new THREE.TextureLoader();
const cor = loader.load('cor.jpg');
cor.colorSpace = THREE.SRGBColorSpace;

const material = new THREE.MeshStandardMaterial({
  map: cor,
  normalMap: loader.load('normal.jpg'),
  roughnessMap: loader.load('pedra_spec.jpg')
});

const geometria = new THREE.BoxGeometry(2, 2, 2);
const cubo = new THREE.Mesh(geometria, material);
cubo.rotation.x = 0.5;
cubo.rotation.y = -0.6;
scene.add(cubo);

function animar() {
  requestAnimationFrame(animar);
  controls.update();
  renderer.render(scene, camera);
}
animar();
