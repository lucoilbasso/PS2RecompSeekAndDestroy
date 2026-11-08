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

// Function: entry_00171250
// Address: 0x171250 - 0x17128c
void entry_00171250_0x171250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171250_0x171250");
#endif

    switch (ctx->pc) {
        case 0x171260u: goto label_171260;
        default: break;
    }

    ctx->pc = 0x171250u;

    // 0x171250: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x171250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x171254: 0x34058100  ori         $a1, $zero, 0x8100
    ctx->pc = 0x171254u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33024);
    // 0x171258: 0xc071254  jal         func_1C4950
    ctx->pc = 0x171258u;
    SET_GPR_U32(ctx, 31, 0x171260u);
    ctx->pc = 0x17125Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171258u;
    // 0x17125c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4950u, 0x171258u, 0x171260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171260u;
label_171260:
    // 0x171260: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x171260u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x171264: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x171264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x171268: 0x8e090044  lw          $t1, 0x44($s0)
    ctx->pc = 0x171268u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x17126c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x17126cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x171270: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x171270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171274: 0x494823  subu        $t1, $v0, $t1
    ctx->pc = 0x171274u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x171278: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x171278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x17127c: 0x27a60008  addiu       $a2, $sp, 0x8
    ctx->pc = 0x17127cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x171280: 0x27a7000c  addiu       $a3, $sp, 0xC
    ctx->pc = 0x171280u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x171284: 0xc05c4dc  jal         func_171370
    ctx->pc = 0x171284u;
    SET_GPR_U32(ctx, 31, 0x17128Cu);
    ctx->pc = 0x171288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171284u;
    // 0x171288: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171370u, 0x171284u, 0x17128Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17128Cu;
}
