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

// Function: entry_00125a34
// Address: 0x125a34 - 0x125a90
void entry_00125a34_0x125a34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00125a34_0x125a34");
#endif

    switch (ctx->pc) {
        case 0x125a50u: goto label_125a50;
        default: break;
    }

    ctx->pc = 0x125a34u;

    // 0x125a34: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x125a34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x125a38: 0x3484fffd  ori         $a0, $a0, 0xFFFD
    ctx->pc = 0x125a38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65533);
    // 0x125a3c: 0x1810  mfhi        $v1
    ctx->pc = 0x125a3cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x125a40: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x125a40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x125a44: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x125a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x125a48: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x125A48u;
    SET_GPR_U32(ctx, 31, 0x125A50u);
    ctx->pc = 0x125A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125A48u;
    // 0x125a4c: 0xae030020  sw          $v1, 0x20($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x125A48u, 0x125A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125A50u;
label_125a50:
    // 0x125a50: 0x3c013800  lui         $at, 0x3800
    ctx->pc = 0x125a50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14336 << 16));
    // 0x125a54: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x125a54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x125a58: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x125a58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125a5c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x125a5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x125a60: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x125a60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x125a64: 0x41042  srl         $v0, $a0, 1
    ctx->pc = 0x125a64u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x125a68: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x125a68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x125a6c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x125a6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x125a70: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x125a70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125a74: 0x2a250040  slti        $a1, $s1, 0x40
    ctx->pc = 0x125a74u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x125a78: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x125A78u;
    {
        const bool branch_taken_0x125a78 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x125A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125A78u;
        // 0x125a7c: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125a78) {
            ctx->pc = 0x125A90u;
            return;
        }
    }
    ctx->pc = 0x125A80u;
    // 0x125a80: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x125a80u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x125a84: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x125a84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x125a88: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x125A88u;
    {
        const bool branch_taken_0x125a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125A88u;
        // 0x125a8c: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x125a88) {
            ctx->pc = 0x125AA0u;
            return;
        }
    }
    ctx->pc = 0x125A90u;
}
