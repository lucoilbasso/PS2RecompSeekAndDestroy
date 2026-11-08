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
// Address: 0x16eb00 - 0x16eb2c
void caseD_4_0x16eb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x16eb00");
#endif

    ctx->pc = 0x16eb00u;

    // 0x16eb00: 0x8e340264  lw          $s4, 0x264($s1)
    ctx->pc = 0x16eb00u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
    // 0x16eb04: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x16eb04u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x16eb08: 0x8e82001c  lw          $v0, 0x1C($s4)
    ctx->pc = 0x16eb08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x16eb0c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x16eb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16eb10: 0x24900020  addiu       $s0, $a0, 0x20
    ctx->pc = 0x16eb10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x16eb14: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x16eb14u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x16eb18: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x16eb18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x16eb1c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16EB1Cu;
    {
        const bool branch_taken_0x16eb1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EB1Cu;
        // 0x16eb20: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16eb1c) {
            ctx->pc = 0x16EB2Cu;
            return;
        }
    }
    ctx->pc = 0x16EB24u;
    // 0x16eb24: 0xc061920  jal         func_186480
    ctx->pc = 0x16EB24u;
    SET_GPR_U32(ctx, 31, 0x16EB2Cu);
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x16EB24u, 0x16EB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EB2Cu;
}
