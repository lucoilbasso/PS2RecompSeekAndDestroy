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

// Function: entry_00198cdc
// Address: 0x198cdc - 0x198d10
void entry_00198cdc_0x198cdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198cdc_0x198cdc");
#endif

    switch (ctx->pc) {
        case 0x198d04u: goto label_198d04;
        default: break;
    }

    ctx->pc = 0x198cdcu;

    // 0x198cdc: 0x26460020  addiu       $a2, $s2, 0x20
    ctx->pc = 0x198cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x198ce0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x198ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198ce4: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x198ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x198ce8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x198ce8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198cec: 0xacc70004  sw          $a3, 0x4($a2)
    ctx->pc = 0x198cecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 7));
    // 0x198cf0: 0x92620006  lbu         $v0, 0x6($s3)
    ctx->pc = 0x198cf0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x198cf4: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x198cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x198cf8: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x198cf8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x198cfc: 0xc066442  jal         func_199108
    ctx->pc = 0x198CFCu;
    SET_GPR_U32(ctx, 31, 0x198D04u);
    ctx->pc = 0x198D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198CFCu;
    // 0x198d00: 0x9667000a  lhu         $a3, 0xA($s3) (Delay Slot)
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 10)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199108u, 0x198CFCu, 0x198D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198D04u;
label_198d04:
    // 0x198d04: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x198d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198d08: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x198d08u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198d0c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x198d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->pc = 0x198d10u;
}
