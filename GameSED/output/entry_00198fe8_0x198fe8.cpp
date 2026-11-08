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

// Function: entry_00198fe8
// Address: 0x198fe8 - 0x199018
void entry_00198fe8_0x198fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198fe8_0x198fe8");
#endif

    ctx->pc = 0x198fe8u;

    // 0x198fe8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x198fe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x198fec: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x198fecu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x198ff0: 0xace3000c  sw          $v1, 0xC($a3)
    ctx->pc = 0x198ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
    // 0x198ff4: 0xace40230  sw          $a0, 0x230($a3)
    ctx->pc = 0x198ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 560), GPR_U32(ctx, 4));
    // 0x198ff8: 0xace50234  sw          $a1, 0x234($a3)
    ctx->pc = 0x198ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 564), GPR_U32(ctx, 5));
    // 0x198ffc: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x198ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x199000: 0x14c00005  bnez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x199000u;
    {
        const bool branch_taken_0x199000 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x199004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199000u;
        // 0x199004: 0xace80008  sw          $t0, 0x8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199000) {
            ctx->pc = 0x199018u;
            return;
        }
    }
    ctx->pc = 0x199008u;
    // 0x199008: 0xace00238  sw          $zero, 0x238($a3)
    ctx->pc = 0x199008u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 568), GPR_U32(ctx, 0));
    // 0x19900c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x19900Cu;
    {
        const bool branch_taken_0x19900c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19900Cu;
        // 0x199010: 0xace0023c  sw          $zero, 0x23C($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 572), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19900c) {
            ctx->pc = 0x199028u;
            return;
        }
    }
    ctx->pc = 0x199014u;
    // 0x199014: 0x0  nop
    ctx->pc = 0x199014u;
    // NOP
    ctx->pc = 0x199018u;
}
