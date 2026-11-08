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

// Function: _request_rdata
// Address: 0x1b13d8 - 0x1b1438
void _request_rdata_0x1b13d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_request_rdata_0x1b13d8");
#endif

    switch (ctx->pc) {
        case 0x1b13f0u: goto label_1b13f0;
        default: break;
    }

    ctx->pc = 0x1b13d8u;

    // 0x1b13d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b13d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b13dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b13dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b13e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b13e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b13e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b13e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b13e8: 0xc06c4ac  jal         func_1B12B0
    ctx->pc = 0x1B13E8u;
    SET_GPR_U32(ctx, 31, 0x1B13F0u);
    ctx->pc = 0x1B13ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B13E8u;
    // 0x1b13ec: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B12B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B12B0u, 0x1B13E8u, 0x1B13F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B13F0u;
label_1b13f0:
    // 0x1b13f0: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x1b13f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1b13f4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1b13f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1b13f8: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1b13f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1b13fc: 0x3463000c  ori         $v1, $v1, 0xC
    ctx->pc = 0x1b13fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12);
    // 0x1b1400: 0xac450014  sw          $a1, 0x14($v0)
    ctx->pc = 0x1b1400u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 5));
    // 0x1b1404: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1b1404u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1b1408: 0xac44001c  sw          $a0, 0x1C($v0)
    ctx->pc = 0x1b1408u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 4));
    // 0x1b140c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b140cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1410: 0xac430020  sw          $v1, 0x20($v0)
    ctx->pc = 0x1b1410u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
    // 0x1b1414: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1b1414u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1b1418: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b1418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b141c: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x1b141cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
    // 0x1b1420: 0x8e090028  lw          $t1, 0x28($s0)
    ctx->pc = 0x1b1420u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1b1424: 0x8e070020  lw          $a3, 0x20($s0)
    ctx->pc = 0x1b1424u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1b1428: 0x8e080024  lw          $t0, 0x24($s0)
    ctx->pc = 0x1b1428u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1b142c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b142cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1430: 0x806df8e  j           func_1B7E38
    ctx->pc = 0x1B1430u;
    ctx->pc = 0x1B1434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1430u;
    // 0x1b1434: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7E38u;
    isceSifSendCmd_0x1b7e38(rdram, ctx, runtime); return;
    ctx->pc = 0x1B1438u;
}
