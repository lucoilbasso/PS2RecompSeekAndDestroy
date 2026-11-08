#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_00127160
// Address: 0x127160 - 0x127230
void entry_00127160_0x127160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127160_0x127160");
#endif

    switch (ctx->pc) {
        case 0x127228u: goto label_127228;
        default: break;
    }

    ctx->pc = 0x127160u;

    // 0x127160: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x127160u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x127164: 0x2a620014  slti        $v0, $s3, 0x14
    ctx->pc = 0x127164u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x127168: 0x1440ff87  bnez        $v0, . + 4 + (-0x79 << 2)
    ctx->pc = 0x127168u;
    {
        const bool branch_taken_0x127168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12716Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127168u;
        // 0x12716c: 0x4617a500  add.s       $f20, $f20, $f23 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x127168) {
            ctx->pc = 0x126F88u;
            return;
        }
    }
    ctx->pc = 0x127170u;
    // 0x127170: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x127170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x127174: 0x3403a000  ori         $v1, $zero, 0xA000
    ctx->pc = 0x127174u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x127178: 0x31bfc  dsll32      $v1, $v1, 15
    ctx->pc = 0x127178u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 15));
    // 0x12717c: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x12717cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x127180: 0x3404a800  ori         $a0, $zero, 0xA800
    ctx->pc = 0x127180u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)43008);
    // 0x127184: 0x421bc  dsll32      $a0, $a0, 6
    ctx->pc = 0x127184u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 6));
    // 0x127188: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x127188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x12718c: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x12718cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x127190: 0x31ff8  dsll        $v1, $v1, 31
    ctx->pc = 0x127190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 31);
    // 0x127194: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x127194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x127198: 0xc6810018  lwc1        $f1, 0x18($s4)
    ctx->pc = 0x127198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12719c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x12719cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1271a0: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x1271a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x1271a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1271a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1271a8: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x1271a8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x1271ac: 0xffc20000  sd          $v0, 0x0($fp)
    ctx->pc = 0x1271acu;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 2));
    // 0x1271b0: 0x2ae40002  slti        $a0, $s7, 0x2
    ctx->pc = 0x1271b0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1271b4: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x1271b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x1271b8: 0x3442242e  ori         $v0, $v0, 0x242E
    ctx->pc = 0x1271b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9262);
    // 0x1271bc: 0x46000d42  mul.s       $f21, $f1, $f0
    ctx->pc = 0x1271bcu;
    ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1271c0: 0x1480ff6b  bnez        $a0, . + 4 + (-0x95 << 2)
    ctx->pc = 0x1271C0u;
    {
        const bool branch_taken_0x1271c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1271C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1271C0u;
        // 0x1271c4: 0xffc20008  sd          $v0, 0x8($fp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 30), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1271c0) {
            ctx->pc = 0x126F70u;
            return;
        }
    }
    ctx->pc = 0x1271C8u;
    // 0x1271c8: 0x8fb100f4  lw          $s1, 0xF4($sp)
    ctx->pc = 0x1271c8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x1271cc: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x1271ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x1271d0: 0x8f848c60  lw          $a0, -0x73A0($gp)
    ctx->pc = 0x1271d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x1271d4: 0x3c071100  lui         $a3, 0x1100
    ctx->pc = 0x1271d4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4352 << 16));
    // 0x1271d8: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x1271d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1271dc: 0x3c085000  lui         $t0, 0x5000
    ctx->pc = 0x1271dcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20480 << 16));
    // 0x1271e0: 0x2051823  subu        $v1, $s0, $a1
    ctx->pc = 0x1271e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x1271e4: 0x3c100022  lui         $s0, 0x22
    ctx->pc = 0x1271e4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)34 << 16));
    // 0x1271e8: 0x2610d650  addiu       $s0, $s0, -0x29B0
    ctx->pc = 0x1271e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956624));
    // 0x1271ec: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x1271ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x1271f0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1271f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1271f4: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x1271f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x1271f8: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x1271f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1271fc: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x1271fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x127200: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x127200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x127204: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x127204u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x127208: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x127208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x12720c: 0xac670008  sw          $a3, 0x8($v1)
    ctx->pc = 0x12720cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
    // 0x127210: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x127210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x127214: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x127214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x127218: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x127218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x12721c: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x12721cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x127220: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x127220u;
    SET_GPR_U32(ctx, 31, 0x127228u);
    ctx->pc = 0x127224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127220u;
    // 0x127224: 0x8e320008  lw          $s2, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x127220u, 0x127228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127228u;
label_127228:
    // 0x127228: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x127228u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x12722c: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x12722cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    ctx->pc = 0x127230u;
}
