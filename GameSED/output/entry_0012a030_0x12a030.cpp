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

// Function: entry_0012a030
// Address: 0x12a030 - 0x12a060
void entry_0012a030_0x12a030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012a030_0x12a030");
#endif

    ctx->pc = 0x12a030u;

    // 0x12a030: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x12a030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x12a034: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12a034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12a038: 0x5462000e  bnel        $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x12A038u;
    {
        const bool branch_taken_0x12a038 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x12a038) {
            ctx->pc = 0x12A03Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12A038u;
            // 0x12a03c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12A074u;
            return;
        }
    }
    ctx->pc = 0x12A040u;
    // 0x12a040: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x12a040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x12a044: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x12a044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x12a048: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x12a048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x12a04c: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x12a04cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x12a050: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x12a050u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x12a054: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x12a054u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x12a058: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12A058u;
    {
        const bool branch_taken_0x12a058 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x12A05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A058u;
        // 0x12a05c: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a058) {
            ctx->pc = 0x12A068u;
            return;
        }
    }
    ctx->pc = 0x12A060u;
}
