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

// Function: entry_00154c08
// Address: 0x154c08 - 0x154c20
void entry_00154c08_0x154c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00154c08_0x154c08");
#endif

    ctx->pc = 0x154c08u;

    // 0x154c08: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x154C08u;
    {
        const bool branch_taken_0x154c08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x154C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154C08u;
        // 0x154c0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154c08) {
            ctx->pc = 0x154C20u;
            return;
        }
    }
    ctx->pc = 0x154C10u;
    // 0x154c10: 0x8e020264  lw          $v0, 0x264($s0)
    ctx->pc = 0x154c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
    // 0x154c14: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x154c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x154c18: 0x100001c0  b           . + 4 + (0x1C0 << 2)
    ctx->pc = 0x154C18u;
    {
        const bool branch_taken_0x154c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154C18u;
        // 0x154c1c: 0xae020264  sw          $v0, 0x264($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 612), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154c18) {
            ctx->pc = 0x15531Cu;
            return;
        }
    }
    ctx->pc = 0x154C20u;
}
