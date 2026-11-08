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

// Function: caseD_4
// Address: 0x163a18 - 0x163a48
void caseD_4_0x163a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x163a18");
#endif

    ctx->pc = 0x163a18u;

    // 0x163a18: 0x8e530254  lw          $s3, 0x254($s2)
    ctx->pc = 0x163a18u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 596)));
    // 0x163a1c: 0x3415e000  ori         $s5, $zero, 0xE000
    ctx->pc = 0x163a1cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57344);
    // 0x163a20: 0x3a0b02d  daddu       $s6, $sp, $zero
    ctx->pc = 0x163a20u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163a24: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x163a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x163a28: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x163a28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x163a2c: 0x24900020  addiu       $s0, $a0, 0x20
    ctx->pc = 0x163a2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x163a30: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x163a30u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x163a34: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x163a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x163a38: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x163A38u;
    {
        const bool branch_taken_0x163a38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x163A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163A38u;
        // 0x163a3c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163a38) {
            ctx->pc = 0x163A48u;
            return;
        }
    }
    ctx->pc = 0x163A40u;
    // 0x163a40: 0xc061920  jal         func_186480
    ctx->pc = 0x163A40u;
    SET_GPR_U32(ctx, 31, 0x163A48u);
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x163A40u, 0x163A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163A48u;
}
