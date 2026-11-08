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

// Function: entry_0011ca58
// Address: 0x11ca58 - 0x11ca90
void entry_0011ca58_0x11ca58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ca58_0x11ca58");
#endif

    ctx->pc = 0x11ca58u;

    // 0x11ca58: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11ca58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11ca5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11ca5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ca60: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x11ca60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x11ca64: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x11ca64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ca68: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11ca68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11ca6c: 0x10a20010  beq         $a1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x11CA6Cu;
    {
        const bool branch_taken_0x11ca6c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x11CA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CA6Cu;
        // 0x11ca70: 0x28a30002  slti        $v1, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ca6c) {
            ctx->pc = 0x11CAB0u;
            return;
        }
    }
    ctx->pc = 0x11CA74u;
    // 0x11ca74: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x11CA74u;
    {
        const bool branch_taken_0x11ca74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x11ca74) {
            ctx->pc = 0x11CA78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11CA74u;
            // 0x11ca78: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11CA90u;
            return;
        }
    }
    ctx->pc = 0x11CA7Cu;
    // 0x11ca7c: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x11CA7Cu;
    {
        const bool branch_taken_0x11ca7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CA7Cu;
        // 0x11ca80: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ca7c) {
            ctx->pc = 0x11CAA0u;
            return;
        }
    }
    ctx->pc = 0x11CA84u;
    // 0x11ca84: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x11CA84u;
    {
        const bool branch_taken_0x11ca84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CA84u;
        // 0x11ca88: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ca84) {
            ctx->pc = 0x11CAE8u;
            return;
        }
    }
    ctx->pc = 0x11CA8Cu;
    // 0x11ca8c: 0x0  nop
    ctx->pc = 0x11ca8cu;
    // NOP
    ctx->pc = 0x11ca90u;
}
