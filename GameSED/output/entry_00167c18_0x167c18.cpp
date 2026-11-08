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

// Function: entry_00167c18
// Address: 0x167c18 - 0x167c30
void entry_00167c18_0x167c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00167c18_0x167c18");
#endif

    ctx->pc = 0x167c18u;

    // 0x167c18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x167c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x167c1c: 0xae60000c  sw          $zero, 0xC($s3)
    ctx->pc = 0x167c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
    // 0x167c20: 0xae620010  sw          $v0, 0x10($s3)
    ctx->pc = 0x167c20u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
    // 0x167c24: 0x1000052c  b           . + 4 + (0x52C << 2)
    ctx->pc = 0x167C24u;
    {
        const bool branch_taken_0x167c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167C24u;
        // 0x167c28: 0xae600008  sw          $zero, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167c24) {
            ctx->pc = 0x1690D8u;
            return;
        }
    }
    ctx->pc = 0x167C2Cu;
    // 0x167c2c: 0x0  nop
    ctx->pc = 0x167c2cu;
    // NOP
    ctx->pc = 0x167c30u;
}
