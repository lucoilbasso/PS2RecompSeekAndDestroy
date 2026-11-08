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

// Function: entry_00175c5c
// Address: 0x175c5c - 0x175c8c
void entry_00175c5c_0x175c5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175c5c_0x175c5c");
#endif

    ctx->pc = 0x175c5cu;

    // 0x175c5c: 0xace30014  sw          $v1, 0x14($a3)
    ctx->pc = 0x175c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 3));
    // 0x175c60: 0x1010  mfhi        $v0
    ctx->pc = 0x175c60u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x175c64: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x175C64u;
    {
        const bool branch_taken_0x175c64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x175C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175C64u;
        // 0x175c68: 0xace20010  sw          $v0, 0x10($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175c64) {
            ctx->pc = 0x175CB0u;
            return;
        }
    }
    ctx->pc = 0x175C6Cu;
    // 0x175c6c: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x175c6cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x175c70: 0x4420006  bltzl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x175C70u;
    {
        const bool branch_taken_0x175c70 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x175c70) {
            ctx->pc = 0x175C74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x175C70u;
            // 0x175c74: 0x8d420058  lw          $v0, 0x58($t2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x175C8Cu;
            return;
        }
    }
    ctx->pc = 0x175C78u;
    // 0x175c78: 0xace00014  sw          $zero, 0x14($a3)
    ctx->pc = 0x175c78u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 0));
    // 0x175c7c: 0xfcef0000  sd          $t7, 0x0($a3)
    ctx->pc = 0x175c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 15));
    // 0x175c80: 0xfcef0008  sd          $t7, 0x8($a3)
    ctx->pc = 0x175c80u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 15));
    // 0x175c84: 0xace00010  sw          $zero, 0x10($a3)
    ctx->pc = 0x175c84u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 0));
    // 0x175c88: 0x8d420058  lw          $v0, 0x58($t2)
    ctx->pc = 0x175c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 88)));
    ctx->pc = 0x175c8cu;
}
