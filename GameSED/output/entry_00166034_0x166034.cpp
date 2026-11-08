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

// Function: entry_00166034
// Address: 0x166034 - 0x166078
void entry_00166034_0x166034(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00166034_0x166034");
#endif

    switch (ctx->pc) {
        case 0x166070u: goto label_166070;
        default: break;
    }

    ctx->pc = 0x166034u;

    // 0x166034: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x166034u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x166038: 0x34c60002  ori         $a2, $a2, 0x2
    ctx->pc = 0x166038u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2);
    // 0x16603c: 0xae060c04  sw          $a2, 0xC04($s0)
    ctx->pc = 0x16603cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3076), GPR_U32(ctx, 6));
    // 0x166040: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x166040u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x166044: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x166044u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x166048: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x166048u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x16604c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x16604cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x166050: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x166050u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x166054: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x166054u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x166058: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x166058u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x16605c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x16605cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x166060: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x166060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166064: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x166064u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166068: 0xc059478  jal         func_1651E0
    ctx->pc = 0x166068u;
    SET_GPR_U32(ctx, 31, 0x166070u);
    ctx->pc = 0x16606Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166068u;
    // 0x16606c: 0x24050060  addiu       $a1, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1651E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1651E0u, 0x166068u, 0x166070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166070u;
label_166070:
    // 0x166070: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x166070u;
    {
        const bool branch_taken_0x166070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166070u;
        // 0x166074: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166070) {
            ctx->pc = 0x166238u;
            return;
        }
    }
    ctx->pc = 0x166078u;
}
