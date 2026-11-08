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

// Function: entry_00141958
// Address: 0x141958 - 0x141984
void entry_00141958_0x141958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141958_0x141958");
#endif

    switch (ctx->pc) {
        case 0x141964u: goto label_141964;
        case 0x14196cu: goto label_14196c;
        default: break;
    }

    ctx->pc = 0x141958u;

    // 0x141958: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x141958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x14195c: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x14195Cu;
    SET_GPR_U32(ctx, 31, 0x141964u);
    ctx->pc = 0x141960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14195Cu;
    // 0x141960: 0x24040126  addiu       $a0, $zero, 0x126 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x14195Cu, 0x141964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141964u;
label_141964:
    // 0x141964: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x141964u;
    SET_GPR_U32(ctx, 31, 0x14196Cu);
    ctx->pc = 0x141968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141964u;
    // 0x141968: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x141964u, 0x14196Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14196Cu;
label_14196c:
    // 0x14196c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14196cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141970: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x141970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x141974: 0x2442ee78  addiu       $v0, $v0, -0x1188
    ctx->pc = 0x141974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962808));
    // 0x141978: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x141978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14197c: 0xc05066a  jal         func_1419A8
    ctx->pc = 0x14197Cu;
    SET_GPR_U32(ctx, 31, 0x141984u);
    ctx->pc = 0x141980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14197Cu;
    // 0x141980: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1419A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1419A8u, 0x14197Cu, 0x141984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141984u;
}
