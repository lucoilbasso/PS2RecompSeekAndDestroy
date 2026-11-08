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

// Function: entry_00102f34
// Address: 0x102f34 - 0x102f50
void entry_00102f34_0x102f34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102f34_0x102f34");
#endif

    ctx->pc = 0x102f34u;

    // 0x102f34: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x102f34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x102f38: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x102f38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x102f3c: 0x8e82003c  lw          $v0, 0x3C($s4)
    ctx->pc = 0x102f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
    // 0x102f40: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x102f40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x102f44: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x102f44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x102f48: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x102F48u;
    {
        const bool branch_taken_0x102f48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x102F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102F48u;
        // 0x102f4c: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102f48) {
            ctx->pc = 0x102ED8u;
            return;
        }
    }
    ctx->pc = 0x102F50u;
}
