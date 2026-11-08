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

// Function: entry_00195080
// Address: 0x195080 - 0x1950b0
void entry_00195080_0x195080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195080_0x195080");
#endif

    switch (ctx->pc) {
        case 0x1950a4u: goto label_1950a4;
        default: break;
    }

    ctx->pc = 0x195080u;

    // 0x195080: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x195080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195084: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x195084u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x195088: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x195088u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19508c: 0xacc80004  sw          $t0, 0x4($a2)
    ctx->pc = 0x19508cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 8));
    // 0x195090: 0x92220006  lbu         $v0, 0x6($s1)
    ctx->pc = 0x195090u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x195094: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x195094u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x195098: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x195098u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x19509c: 0xc066442  jal         func_199108
    ctx->pc = 0x19509Cu;
    SET_GPR_U32(ctx, 31, 0x1950A4u);
    ctx->pc = 0x1950A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19509Cu;
    // 0x1950a0: 0x9627000a  lhu         $a3, 0xA($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199108u, 0x19509Cu, 0x1950A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1950A4u;
label_1950a4:
    // 0x1950a4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1950a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1950a8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1950a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1950ac: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1950acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->pc = 0x1950b0u;
}
