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

// Function: entry_001927dc
// Address: 0x1927dc - 0x19280c
void entry_001927dc_0x1927dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001927dc_0x1927dc");
#endif

    switch (ctx->pc) {
        case 0x1927ecu: goto label_1927ec;
        case 0x1927f4u: goto label_1927f4;
        default: break;
    }

    ctx->pc = 0x1927dcu;

    // 0x1927dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1927dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1927e0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1927e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1927e4: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x1927E4u;
    SET_GPR_U32(ctx, 31, 0x1927ECu);
    ctx->pc = 0x1927E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1927E4u;
    // 0x1927e8: 0x240400a6  addiu       $a0, $zero, 0xA6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 166));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x1927E4u, 0x1927ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1927ECu;
label_1927ec:
    // 0x1927ec: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x1927ECu;
    SET_GPR_U32(ctx, 31, 0x1927F4u);
    ctx->pc = 0x1927F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1927ECu;
    // 0x1927f0: 0x240401e0  addiu       $a0, $zero, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x1927ECu, 0x1927F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1927F4u;
label_1927f4:
    // 0x1927f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1927f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1927f8: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1927f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1927fc: 0x24420530  addiu       $v0, $v0, 0x530
    ctx->pc = 0x1927fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1328));
    // 0x192800: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x192800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192804: 0xc06453c  jal         func_1914F0
    ctx->pc = 0x192804u;
    SET_GPR_U32(ctx, 31, 0x19280Cu);
    ctx->pc = 0x192808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192804u;
    // 0x192808: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1914F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1914F0u, 0x192804u, 0x19280Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19280Cu;
}
