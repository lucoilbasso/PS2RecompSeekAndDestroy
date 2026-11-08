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

// Function: entry_00129140
// Address: 0x129140 - 0x129160
void entry_00129140_0x129140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00129140_0x129140");
#endif

    ctx->pc = 0x129140u;

    // 0x129140: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x129140u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x129144: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x129144u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x129148: 0x16200021  bnez        $s1, . + 4 + (0x21 << 2)
    ctx->pc = 0x129148u;
    {
        const bool branch_taken_0x129148 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x12914Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129148u;
        // 0x12914c: 0xafa2005c  sw          $v0, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129148) {
            ctx->pc = 0x1291D0u;
            return;
        }
    }
    ctx->pc = 0x129150u;
    // 0x129150: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x129150u;
    {
        const bool branch_taken_0x129150 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x129154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129150u;
        // 0x129154: 0x8fa40080  lw          $a0, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129150) {
            ctx->pc = 0x129160u;
            return;
        }
    }
    ctx->pc = 0x129158u;
    // 0x129158: 0x200f02d  daddu       $fp, $s0, $zero
    ctx->pc = 0x129158u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12915c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x12915cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->pc = 0x129160u;
}
