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

// Function: entry_00157a0c
// Address: 0x157a0c - 0x157aa4
void entry_00157a0c_0x157a0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157a0c_0x157a0c");
#endif

    ctx->pc = 0x157a0cu;

    // 0x157a0c: 0xffb404c0  sd          $s4, 0x4C0($sp)
    ctx->pc = 0x157a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1216), GPR_U64(ctx, 20));
    // 0x157a10: 0xffb504c8  sd          $s5, 0x4C8($sp)
    ctx->pc = 0x157a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1224), GPR_U64(ctx, 21));
    // 0x157a14: 0xffb704d8  sd          $s7, 0x4D8($sp)
    ctx->pc = 0x157a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1240), GPR_U64(ctx, 23));
    // 0x157a18: 0xffbe04e0  sd          $fp, 0x4E0($sp)
    ctx->pc = 0x157a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1248), GPR_U64(ctx, 30));
    // 0x157a1c: 0xffbf04e8  sd          $ra, 0x4E8($sp)
    ctx->pc = 0x157a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1256), GPR_U64(ctx, 31));
    // 0x157a20: 0xafa60490  sw          $a2, 0x490($sp)
    ctx->pc = 0x157a20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1168), GPR_U32(ctx, 6));
    // 0x157a24: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x157a24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x157a28: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x157a28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x157a2c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x157a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x157a30: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x157a30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x157a34: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x157a34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x157a38: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x157a38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x157a3c: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x157a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x157a40: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x157a40u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x157a44: 0x7ec20000  sq          $v0, 0x0($s6)
    ctx->pc = 0x157a44u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), GPR_VEC(ctx, 2));
    // 0x157a48: 0x8e51007c  lw          $s1, 0x7C($s2)
    ctx->pc = 0x157a48u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
    // 0x157a4c: 0x27b70030  addiu       $s7, $sp, 0x30
    ctx->pc = 0x157a4cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x157a50: 0xc64100e0  lwc1        $f1, 0xE0($s2)
    ctx->pc = 0x157a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x157a54: 0x27b50060  addiu       $s5, $sp, 0x60
    ctx->pc = 0x157a54u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x157a58: 0x26340020  addiu       $s4, $s1, 0x20
    ctx->pc = 0x157a58u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x157a5c: 0xc64200e4  lwc1        $f2, 0xE4($s2)
    ctx->pc = 0x157a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x157a60: 0x96820002  lhu         $v0, 0x2($s4)
    ctx->pc = 0x157a60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x157a64: 0xc64000e8  lwc1        $f0, 0xE8($s2)
    ctx->pc = 0x157a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157a68: 0x8e4500d8  lw          $a1, 0xD8($s2)
    ctx->pc = 0x157a68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    // 0x157a6c: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x157a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x157a70: 0x8e4400dc  lw          $a0, 0xDC($s2)
    ctx->pc = 0x157a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
    // 0x157a74: 0x8e430104  lw          $v1, 0x104($s2)
    ctx->pc = 0x157a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
    // 0x157a78: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x157a78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x157a7c: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x157a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x157a80: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x157a80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x157a84: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x157a84u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x157a88: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x157a88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x157a8c: 0xafa3003c  sw          $v1, 0x3C($sp)
    ctx->pc = 0x157a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
    // 0x157a90: 0xaef20000  sw          $s2, 0x0($s7)
    ctx->pc = 0x157a90u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 18));
    // 0x157a94: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x157A94u;
    {
        const bool branch_taken_0x157a94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x157A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157A94u;
        // 0x157a98: 0xafb10034  sw          $s1, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157a94) {
            ctx->pc = 0x157AA4u;
            return;
        }
    }
    ctx->pc = 0x157A9Cu;
    // 0x157a9c: 0xc061920  jal         func_186480
    ctx->pc = 0x157A9Cu;
    SET_GPR_U32(ctx, 31, 0x157AA4u);
    ctx->pc = 0x157AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157A9Cu;
    // 0x157aa0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x157A9Cu, 0x157AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157AA4u;
}
