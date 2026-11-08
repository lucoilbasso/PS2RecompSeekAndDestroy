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

// Function: entry_0012d234
// Address: 0x12d234 - 0x12d248
void entry_0012d234_0x12d234(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012d234_0x12d234");
#endif

    ctx->pc = 0x12d234u;

    // 0x12d234: 0x54a20004  bnel        $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12D234u;
    {
        const bool branch_taken_0x12d234 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x12d234) {
            ctx->pc = 0x12D238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D234u;
            // 0x12d238: 0xaca000c0  sw          $zero, 0xC0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 192), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D248u;
            return;
        }
    }
    ctx->pc = 0x12D23Cu;
    // 0x12d23c: 0x8ca200c4  lw          $v0, 0xC4($a1)
    ctx->pc = 0x12d23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 196)));
    // 0x12d240: 0xac82015c  sw          $v0, 0x15C($a0)
    ctx->pc = 0x12d240u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 348), GPR_U32(ctx, 2));
    // 0x12d244: 0xaca000c0  sw          $zero, 0xC0($a1)
    ctx->pc = 0x12d244u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 192), GPR_U32(ctx, 0));
    ctx->pc = 0x12d248u;
}
