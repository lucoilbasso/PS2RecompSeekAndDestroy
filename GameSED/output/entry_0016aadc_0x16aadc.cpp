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

// Function: entry_0016aadc
// Address: 0x16aadc - 0x16ab00
void entry_0016aadc_0x16aadc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016aadc_0x16aadc");
#endif

    ctx->pc = 0x16aadcu;

    // 0x16aadc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16aadcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16aae0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x16aae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x16aae4: 0x8c420c0c  lw          $v0, 0xC0C($v0)
    ctx->pc = 0x16aae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3084)));
    // 0x16aae8: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x16AAE8u;
    {
        const bool branch_taken_0x16aae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x16AAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AAE8u;
        // 0x16aaec: 0x21180  sll         $v0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16aae8) {
            ctx->pc = 0x16AB00u;
            return;
        }
    }
    ctx->pc = 0x16AAF0u;
    // 0x16aaf0: 0x8cc301b4  lw          $v1, 0x1B4($a2)
    ctx->pc = 0x16aaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 436)));
    // 0x16aaf4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16AAF4u;
    {
        const bool branch_taken_0x16aaf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AAF4u;
        // 0x16aaf8: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16aaf4) {
            ctx->pc = 0x16AB04u;
            return;
        }
    }
    ctx->pc = 0x16AAFCu;
    // 0x16aafc: 0x0  nop
    ctx->pc = 0x16aafcu;
    // NOP
    ctx->pc = 0x16ab00u;
}
