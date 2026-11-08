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

// Function: entry_0010cd7c
// Address: 0x10cd7c - 0x10cdbc
void entry_0010cd7c_0x10cd7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010cd7c_0x10cd7c");
#endif

    switch (ctx->pc) {
        case 0x10cd84u: goto label_10cd84;
        case 0x10cd94u: goto label_10cd94;
        default: break;
    }

    ctx->pc = 0x10cd7cu;

    // 0x10cd7c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10CD7Cu;
    SET_GPR_U32(ctx, 31, 0x10CD84u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10CD7Cu, 0x10CD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CD84u;
label_10cd84:
    // 0x10cd84: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x10CD84u;
    {
        const bool branch_taken_0x10cd84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10cd84) {
            ctx->pc = 0x10CD88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10CD84u;
            // 0x10cd88: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10CDC8u;
            return;
        }
    }
    ctx->pc = 0x10CD8Cu;
    // 0x10cd8c: 0xc06a250  jal         func_1A8940
    ctx->pc = 0x10CD8Cu;
    SET_GPR_U32(ctx, 31, 0x10CD94u);
    ctx->pc = 0x10CD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CD8Cu;
    // 0x10cd90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x10CD8Cu, 0x10CD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CD94u;
label_10cd94:
    // 0x10cd94: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x10cd94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x10cd98: 0x8e23024c  lw          $v1, 0x24C($s1)
    ctx->pc = 0x10cd98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 588)));
    // 0x10cd9c: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x10cd9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x10cda0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x10cda0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x10cda4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x10cda4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10cda8: 0x50450007  beql        $v0, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x10CDA8u;
    {
        const bool branch_taken_0x10cda8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x10cda8) {
            ctx->pc = 0x10CDACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10CDA8u;
            // 0x10cdac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10CDC8u;
            return;
        }
    }
    ctx->pc = 0x10CDB0u;
    // 0x10cdb0: 0x8e22024c  lw          $v0, 0x24C($s1)
    ctx->pc = 0x10cdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 588)));
    // 0x10cdb4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x10CDB4u;
    {
        const bool branch_taken_0x10cdb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10cdb4) {
            ctx->pc = 0x10CDB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10CDB4u;
            // 0x10cdb8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10CDC8u;
            return;
        }
    }
    ctx->pc = 0x10CDBCu;
}
