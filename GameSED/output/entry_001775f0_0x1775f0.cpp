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

// Function: entry_001775f0
// Address: 0x1775f0 - 0x177620
void entry_001775f0_0x1775f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001775f0_0x1775f0");
#endif

    switch (ctx->pc) {
        case 0x177600u: goto label_177600;
        default: break;
    }

    ctx->pc = 0x1775f0u;

    // 0x1775f0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1775f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1775f4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1775f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1775f8: 0xc06e3ea  jal         func_1B8FA8
    ctx->pc = 0x1775F8u;
    SET_GPR_U32(ctx, 31, 0x177600u);
    ctx->pc = 0x1775FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1775F8u;
    // 0x1775fc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8FA8u, 0x1775F8u, 0x177600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177600u;
label_177600:
    // 0x177600: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x177600u;
    {
        const bool branch_taken_0x177600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x177600) {
            ctx->pc = 0x177604u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x177600u;
            // 0x177604: 0x92230000  lbu         $v1, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x177620u;
            return;
        }
    }
    ctx->pc = 0x177608u;
    // 0x177608: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x177608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17760c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17760cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x177610: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x177610u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x177614: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x177614u;
    {
        const bool branch_taken_0x177614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177614u;
        // 0x177618: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177614) {
            ctx->pc = 0x1776CCu;
            return;
        }
    }
    ctx->pc = 0x17761Cu;
    // 0x17761c: 0x0  nop
    ctx->pc = 0x17761cu;
    // NOP
    ctx->pc = 0x177620u;
}
