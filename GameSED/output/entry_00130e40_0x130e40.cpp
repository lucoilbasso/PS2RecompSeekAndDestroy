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

// Function: entry_00130e40
// Address: 0x130e40 - 0x130e70
void entry_00130e40_0x130e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130e40_0x130e40");
#endif

    ctx->pc = 0x130e40u;

    // 0x130e40: 0x8e02013c  lw          $v0, 0x13C($s0)
    ctx->pc = 0x130e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
    // 0x130e44: 0x50400047  beql        $v0, $zero, . + 4 + (0x47 << 2)
    ctx->pc = 0x130E44u;
    {
        const bool branch_taken_0x130e44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x130e44) {
            ctx->pc = 0x130E48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x130E44u;
            // 0x130e48: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x130F64u;
            return;
        }
    }
    ctx->pc = 0x130E4Cu;
    // 0x130e4c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x130e4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130e50: 0x8cc2004c  lw          $v0, 0x4C($a2)
    ctx->pc = 0x130e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 76)));
    // 0x130e54: 0x54500043  bnel        $v0, $s0, . + 4 + (0x43 << 2)
    ctx->pc = 0x130E54u;
    {
        const bool branch_taken_0x130e54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x130e54) {
            ctx->pc = 0x130E58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x130E54u;
            // 0x130e58: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x130F64u;
            return;
        }
    }
    ctx->pc = 0x130E5Cu;
    // 0x130e5c: 0x240c0004  addiu       $t4, $zero, 0x4
    ctx->pc = 0x130e5cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x130e60: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x130e60u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130e64: 0x240b000b  addiu       $t3, $zero, 0xB
    ctx->pc = 0x130e64u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x130e68: 0x240a0007  addiu       $t2, $zero, 0x7
    ctx->pc = 0x130e68u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x130e6c: 0x8cc20024  lw          $v0, 0x24($a2)
    ctx->pc = 0x130e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
    ctx->pc = 0x130e70u;
}
