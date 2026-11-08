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

// Function: entry_0013cbbc
// Address: 0x13cbbc - 0x13cbd8
void entry_0013cbbc_0x13cbbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013cbbc_0x13cbbc");
#endif

    ctx->pc = 0x13cbbcu;

    // 0x13cbbc: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x13cbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x13cbc0: 0x94630020  lhu         $v1, 0x20($v1)
    ctx->pc = 0x13cbc0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x13cbc4: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x13cbc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x13cbc8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13CBC8u;
    {
        const bool branch_taken_0x13cbc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CBC8u;
        // 0x13cbcc: 0x8f828a38  lw          $v0, -0x75C8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cbc8) {
            ctx->pc = 0x13CBD8u;
            return;
        }
    }
    ctx->pc = 0x13CBD0u;
    // 0x13cbd0: 0x2442fffb  addiu       $v0, $v0, -0x5
    ctx->pc = 0x13cbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967291));
    // 0x13cbd4: 0xaf828a38  sw          $v0, -0x75C8($gp)
    ctx->pc = 0x13cbd4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937144), GPR_U32(ctx, 2));
    ctx->pc = 0x13cbd8u;
}
