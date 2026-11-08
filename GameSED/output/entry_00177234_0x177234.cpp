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

// Function: entry_00177234
// Address: 0x177234 - 0x177264
void entry_00177234_0x177234(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177234_0x177234");
#endif

    switch (ctx->pc) {
        case 0x177244u: goto label_177244;
        case 0x17724cu: goto label_17724c;
        default: break;
    }

    ctx->pc = 0x177234u;

    // 0x177234: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x177234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x177238: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x177238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17723c: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x17723Cu;
    SET_GPR_U32(ctx, 31, 0x177244u);
    ctx->pc = 0x177240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17723Cu;
    // 0x177240: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x17723Cu, 0x177244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177244u;
label_177244:
    // 0x177244: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x177244u;
    SET_GPR_U32(ctx, 31, 0x17724Cu);
    ctx->pc = 0x177248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177244u;
    // 0x177248: 0x24040580  addiu       $a0, $zero, 0x580 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x177244u, 0x17724Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17724Cu;
label_17724c:
    // 0x17724c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17724cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177250: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x177250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x177254: 0x2442f938  addiu       $v0, $v0, -0x6C8
    ctx->pc = 0x177254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965560));
    // 0x177258: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x177258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17725c: 0xc05dca2  jal         func_177288
    ctx->pc = 0x17725Cu;
    SET_GPR_U32(ctx, 31, 0x177264u);
    ctx->pc = 0x177260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17725Cu;
    // 0x177260: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177288u, 0x17725Cu, 0x177264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177264u;
}
