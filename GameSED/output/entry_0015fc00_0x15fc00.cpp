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

// Function: entry_0015fc00
// Address: 0x15fc00 - 0x15fc68
void entry_0015fc00_0x15fc00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015fc00_0x15fc00");
#endif

    switch (ctx->pc) {
        case 0x15fc60u: goto label_15fc60;
        default: break;
    }

    ctx->pc = 0x15fc00u;

    // 0x15fc00: 0x450018  mult        $zero, $v0, $a1
    ctx->pc = 0x15fc00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x15fc04: 0x70001030  pmfhl.lw    $v0
    ctx->pc = 0x15fc04u;
    SET_GPR_VEC(ctx, 2, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x15fc08: 0x213fb  dsra        $v0, $v0, 15
    ctx->pc = 0x15fc08u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 15);
    // 0x15fc0c: 0x2442ff9c  addiu       $v0, $v0, -0x64
    ctx->pc = 0x15fc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
    // 0x15fc10: 0x2403ffc6  addiu       $v1, $zero, -0x3A
    ctx->pc = 0x15fc10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967238));
    // 0x15fc14: 0xae620fc0  sw          $v0, 0xFC0($s3)
    ctx->pc = 0x15fc14u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4032), GPR_U32(ctx, 2));
    // 0x15fc18: 0x2404003a  addiu       $a0, $zero, 0x3A
    ctx->pc = 0x15fc18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x15fc1c: 0x704310c8  pmaxw       $v0, $v0, $v1
    ctx->pc = 0x15fc1cu;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x15fc20: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x15fc20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x15fc24: 0x704410e8  pminw       $v0, $v0, $a0
    ctx->pc = 0x15fc24u;
    SET_GPR_VEC(ctx, 2, PS2_PMINW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x15fc28: 0x28000  sll         $s0, $v0, 0
    ctx->pc = 0x15fc28u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x15fc2c: 0x8e630fc8  lw          $v1, 0xFC8($s3)
    ctx->pc = 0x15fc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4040)));
    // 0x15fc30: 0x5060000d  beql        $v1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x15FC30u;
    {
        const bool branch_taken_0x15fc30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15fc30) {
            ctx->pc = 0x15FC34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15FC30u;
            // 0x15fc34: 0x8e660f2c  lw          $a2, 0xF2C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3884)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15FC68u;
            return;
        }
    }
    ctx->pc = 0x15FC38u;
    // 0x15fc38: 0x24066000  addiu       $a2, $zero, 0x6000
    ctx->pc = 0x15fc38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24576));
    // 0x15fc3c: 0x2060018  mult        $zero, $s0, $a2
    ctx->pc = 0x15fc3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x15fc40: 0x70003030  pmfhl.lw    $a2
    ctx->pc = 0x15fc40u;
    SET_GPR_VEC(ctx, 6, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x15fc44: 0x633fb  dsra        $a2, $a2, 15
    ctx->pc = 0x15fc44u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> 15);
    // 0x15fc48: 0x8e620f2c  lw          $v0, 0xF2C($s3)
    ctx->pc = 0x15fc48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3884)));
    // 0x15fc4c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15fc4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fc50: 0x8e640f34  lw          $a0, 0xF34($s3)
    ctx->pc = 0x15fc50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3892)));
    // 0x15fc54: 0x8e650f28  lw          $a1, 0xF28($s3)
    ctx->pc = 0x15fc54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3880)));
    // 0x15fc58: 0xc061344  jal         func_184D10
    ctx->pc = 0x15FC58u;
    SET_GPR_U32(ctx, 31, 0x15FC60u);
    ctx->pc = 0x15FC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FC58u;
    // 0x15fc5c: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184D10u, 0x15FC58u, 0x15FC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FC60u;
label_15fc60:
    // 0x15fc60: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x15FC60u;
    {
        const bool branch_taken_0x15fc60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15fc60) {
            ctx->pc = 0x15FC7Cu;
            return;
        }
    }
    ctx->pc = 0x15FC68u;
}
