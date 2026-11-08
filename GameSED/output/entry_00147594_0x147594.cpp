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

// Function: entry_00147594
// Address: 0x147594 - 0x1475d0
void entry_00147594_0x147594(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00147594_0x147594");
#endif

    switch (ctx->pc) {
        case 0x1475a4u: goto label_1475a4;
        default: break;
    }

    ctx->pc = 0x147594u;

    // 0x147594: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x147594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x147598: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x147598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x14759c: 0xc06256e  jal         func_1895B8
    ctx->pc = 0x14759Cu;
    SET_GPR_U32(ctx, 31, 0x1475A4u);
    ctx->pc = 0x1475A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14759Cu;
    // 0x1475a0: 0x245126c0  addiu       $s1, $v0, 0x26C0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 9920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1895B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1895B8u, 0x14759Cu, 0x1475A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1475A4u;
label_1475a4:
    // 0x1475a4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1475a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1475a8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1475a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1475ac: 0xae220250  sw          $v0, 0x250($s1)
    ctx->pc = 0x1475acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
    // 0x1475b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1475b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1475b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1475b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1475b8: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x1475b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1475bc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1475bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1475c0: 0xae220370  sw          $v0, 0x370($s1)
    ctx->pc = 0x1475c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 880), GPR_U32(ctx, 2));
    // 0x1475c4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1475c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1475c8: 0xae230374  sw          $v1, 0x374($s1)
    ctx->pc = 0x1475c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 884), GPR_U32(ctx, 3));
    // 0x1475cc: 0x0  nop
    ctx->pc = 0x1475ccu;
    // NOP
    ctx->pc = 0x1475d0u;
}
