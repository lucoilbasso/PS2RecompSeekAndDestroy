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

// Function: entry_0014c7e0
// Address: 0x14c7e0 - 0x14c804
void entry_0014c7e0_0x14c7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c7e0_0x14c7e0");
#endif

    ctx->pc = 0x14c7e0u;

    // 0x14c7e0: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x14c7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x14c7e4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x14c7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x14c7e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14c7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14c7ec: 0x8c463630  lw          $a2, 0x3630($v0)
    ctx->pc = 0x14c7ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13872)));
    // 0x14c7f0: 0x50c00022  beql        $a2, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x14C7F0u;
    {
        const bool branch_taken_0x14c7f0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c7f0) {
            ctx->pc = 0x14C7F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C7F0u;
            // 0x14c7f4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C87Cu;
            return;
        }
    }
    ctx->pc = 0x14C7F8u;
    // 0x14c7f8: 0x56000015  bnel        $s0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x14C7F8u;
    {
        const bool branch_taken_0x14c7f8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x14c7f8) {
            ctx->pc = 0x14C7FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C7F8u;
            // 0x14c7fc: 0x8cc2000c  lw          $v0, 0xC($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C850u;
            return;
        }
    }
    ctx->pc = 0x14C800u;
    // 0x14c800: 0x8cc201ac  lw          $v0, 0x1AC($a2)
    ctx->pc = 0x14c800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 428)));
    ctx->pc = 0x14c804u;
}
