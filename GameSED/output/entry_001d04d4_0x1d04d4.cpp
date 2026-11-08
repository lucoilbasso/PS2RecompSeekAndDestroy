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

// Function: entry_001d04d4
// Address: 0x1d04d4 - 0x1d0510
void entry_001d04d4_0x1d04d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d04d4_0x1d04d4");
#endif

    switch (ctx->pc) {
        case 0x1d04ecu: goto label_1d04ec;
        default: break;
    }

    ctx->pc = 0x1d04d4u;

    // 0x1d04d4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1d04d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d04d8: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1d04d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d04dc: 0x54a0000c  bnel        $a1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1D04DCu;
    {
        const bool branch_taken_0x1d04dc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d04dc) {
            ctx->pc = 0x1D04E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D04DCu;
            // 0x1d04e0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D0510u;
            return;
        }
    }
    ctx->pc = 0x1D04E4u;
    // 0x1d04e4: 0xc0741b6  jal         func_1D06D8
    ctx->pc = 0x1D04E4u;
    SET_GPR_U32(ctx, 31, 0x1D04ECu);
    ctx->pc = 0x1D04E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D04E4u;
    // 0x1d04e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D06D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D06D8u, 0x1D04E4u, 0x1D04ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D04ECu;
label_1d04ec:
    // 0x1d04ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d04ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d04f0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1d04f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d04f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d04f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d04f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d04f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d04fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d04fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0500: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d0500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d0504: 0x807419e  j           func_1D0678
    ctx->pc = 0x1D0504u;
    ctx->pc = 0x1D0508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0504u;
    // 0x1d0508: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0678u;
    _kill_r_0x1d0678(rdram, ctx, runtime); return;
    ctx->pc = 0x1D050Cu;
    // 0x1d050c: 0x0  nop
    ctx->pc = 0x1d050cu;
    // NOP
    ctx->pc = 0x1d0510u;
}
