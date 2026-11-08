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

// Function: entry_001c9f3c
// Address: 0x1c9f3c - 0x1c9f70
void entry_001c9f3c_0x1c9f3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c9f3c_0x1c9f3c");
#endif

    ctx->pc = 0x1c9f3cu;

    // 0x1c9f3c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1c9f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c9f40: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x1c9f40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x1c9f44: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1c9f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c9f48: 0x47102b  sltu        $v0, $v0, $a3
    ctx->pc = 0x1c9f48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1c9f4c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C9F4Cu;
    {
        const bool branch_taken_0x1c9f4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9F4Cu;
        // 0x1c9f50: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9f4c) {
            ctx->pc = 0x1C9F70u;
            return;
        }
    }
    ctx->pc = 0x1C9F54u;
    // 0x1c9f54: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1c9f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1c9f58: 0x7207a  dsrl        $a0, $a3, 1
    ctx->pc = 0x1c9f58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) >> 1);
    // 0x1c9f5c: 0x30e30001  andi        $v1, $a3, 0x1
    ctx->pc = 0x1c9f5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x1c9f60: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1c9f60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1c9f64: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c9f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c9f68: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x1c9f68u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x1c9f6c: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x1c9f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x1c9f70u;
}
