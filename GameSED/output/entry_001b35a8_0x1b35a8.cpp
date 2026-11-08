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

// Function: entry_001b35a8
// Address: 0x1b35a8 - 0x1b35d4
void entry_001b35a8_0x1b35a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b35a8_0x1b35a8");
#endif

    ctx->pc = 0x1b35a8u;

    // 0x1b35a8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1b35a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b35ac: 0x26640014  addiu       $a0, $s3, 0x14
    ctx->pc = 0x1b35acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
    // 0x1b35b0: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x1b35b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1b35b4: 0xc41025  or          $v0, $a2, $a0
    ctx->pc = 0x1b35b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x1b35b8: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x1b35b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x1b35bc: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1B35BCu;
    {
        const bool branch_taken_0x1b35bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B35C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B35BCu;
        // 0x1b35c0: 0xae63041c  sw          $v1, 0x41C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1052), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b35bc) {
            ctx->pc = 0x1B3630u;
            return;
        }
    }
    ctx->pc = 0x1B35C4u;
    // 0x1b35c4: 0x24c20400  addiu       $v0, $a2, 0x400
    ctx->pc = 0x1b35c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1024));
    // 0x1b35c8: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x1b35c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b35cc: 0x3c150041  lui         $s5, 0x41
    ctx->pc = 0x1b35ccu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65 << 16));
    // 0x1b35d0: 0x3c110041  lui         $s1, 0x41
    ctx->pc = 0x1b35d0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65 << 16));
    ctx->pc = 0x1b35d4u;
}
