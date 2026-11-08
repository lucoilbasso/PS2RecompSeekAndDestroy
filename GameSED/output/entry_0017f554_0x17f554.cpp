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

// Function: entry_0017f554
// Address: 0x17f554 - 0x17f588
void entry_0017f554_0x17f554(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f554_0x17f554");
#endif

    switch (ctx->pc) {
        case 0x17f564u: goto label_17f564;
        case 0x17f56cu: goto label_17f56c;
        default: break;
    }

    ctx->pc = 0x17f554u;

    // 0x17f554: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17f554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17f558: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17f558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17f55c: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x17F55Cu;
    SET_GPR_U32(ctx, 31, 0x17F564u);
    ctx->pc = 0x17F560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F55Cu;
    // 0x17f560: 0x24040305  addiu       $a0, $zero, 0x305 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 773));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x17F55Cu, 0x17F564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F564u;
label_17f564:
    // 0x17f564: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x17F564u;
    SET_GPR_U32(ctx, 31, 0x17F56Cu);
    ctx->pc = 0x17F568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F564u;
    // 0x17f568: 0x24040038  addiu       $a0, $zero, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x17F564u, 0x17F56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F56Cu;
label_17f56c:
    // 0x17f56c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17f56cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f570: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17f570u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f574: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x17f574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x17f578: 0x2442fc50  addiu       $v0, $v0, -0x3B0
    ctx->pc = 0x17f578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966352));
    // 0x17f57c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17f57cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f580: 0xc05fd6c  jal         func_17F5B0
    ctx->pc = 0x17F580u;
    SET_GPR_U32(ctx, 31, 0x17F588u);
    ctx->pc = 0x17F584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F580u;
    // 0x17f584: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F5B0u, 0x17F580u, 0x17F588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F588u;
}
