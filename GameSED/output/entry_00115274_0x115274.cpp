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

// Function: entry_00115274
// Address: 0x115274 - 0x1152c0
void entry_00115274_0x115274(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115274_0x115274");
#endif

    switch (ctx->pc) {
        case 0x115298u: goto label_115298;
        case 0x1152a8u: goto label_1152a8;
        case 0x1152b4u: goto label_1152b4;
        default: break;
    }

    ctx->pc = 0x115274u;

    // 0x115274: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x115274u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115278: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x115278u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x11527c: 0x325100ff  andi        $s1, $s2, 0xFF
    ctx->pc = 0x11527cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x115280: 0x3c01001f  lui         $at, 0x1F
    ctx->pc = 0x115280u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)31 << 16));
    // 0x115284: 0x2421c0c0  addiu       $at, $at, -0x3F40
    ctx->pc = 0x115284u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294951104));
    // 0x115288: 0x308021  addu        $s0, $at, $s0
    ctx->pc = 0x115288u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x11528c: 0x118880  sll         $s1, $s1, 2
    ctx->pc = 0x11528cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x115290: 0xc041882  jal         func_106208
    ctx->pc = 0x115290u;
    SET_GPR_U32(ctx, 31, 0x115298u);
    ctx->pc = 0x115294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115290u;
    // 0x115294: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106208u, 0x115290u, 0x115298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115298u;
label_115298:
    // 0x115298: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x115298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11529c: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x11529cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1152a0: 0xc041882  jal         func_106208
    ctx->pc = 0x1152A0u;
    SET_GPR_U32(ctx, 31, 0x1152A8u);
    ctx->pc = 0x1152A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1152A0u;
    // 0x1152a4: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106208u, 0x1152A0u, 0x1152A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1152A8u;
label_1152a8:
    // 0x1152a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1152a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1152ac: 0xc041794  jal         func_105E50
    ctx->pc = 0x1152ACu;
    SET_GPR_U32(ctx, 31, 0x1152B4u);
    ctx->pc = 0x1152B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1152ACu;
    // 0x1152b0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105E50u, 0x1152ACu, 0x1152B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1152B4u;
label_1152b4:
    // 0x1152b4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1152b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1152b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1152b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1152bc: 0x0  nop
    ctx->pc = 0x1152bcu;
    // NOP
    ctx->pc = 0x1152c0u;
}
