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

// Function: entry_0014f6f8
// Address: 0x14f6f8 - 0x14f740
void entry_0014f6f8_0x14f6f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f6f8_0x14f6f8");
#endif

    ctx->pc = 0x14f6f8u;

    // 0x14f6f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14f6f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14f6fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14f6fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f700: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x14f700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x14f704: 0x8e030184  lw          $v1, 0x184($s0)
    ctx->pc = 0x14f704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x14f708: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14f708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14f70c: 0x54400026  bnel        $v0, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x14F70Cu;
    {
        const bool branch_taken_0x14f70c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14f70c) {
            ctx->pc = 0x14F710u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F70Cu;
            // 0x14f710: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F7A8u;
            return;
        }
    }
    ctx->pc = 0x14F714u;
    // 0x14f714: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x14f714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x14f718: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14f718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14f71c: 0x54400022  bnel        $v0, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x14F71Cu;
    {
        const bool branch_taken_0x14f71c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14f71c) {
            ctx->pc = 0x14F720u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F71Cu;
            // 0x14f720: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F7A8u;
            return;
        }
    }
    ctx->pc = 0x14F724u;
    // 0x14f724: 0x8e030690  lw          $v1, 0x690($s0)
    ctx->pc = 0x14f724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1680)));
    // 0x14f728: 0x8c620c0c  lw          $v0, 0xC0C($v1)
    ctx->pc = 0x14f728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3084)));
    // 0x14f72c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14F72Cu;
    {
        const bool branch_taken_0x14f72c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x14F730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F72Cu;
        // 0x14f730: 0x21180  sll         $v0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f72c) {
            ctx->pc = 0x14F740u;
            return;
        }
    }
    ctx->pc = 0x14F734u;
    // 0x14f734: 0x8c6301b4  lw          $v1, 0x1B4($v1)
    ctx->pc = 0x14f734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 436)));
    // 0x14f738: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x14F738u;
    {
        const bool branch_taken_0x14f738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F738u;
        // 0x14f73c: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f738) {
            ctx->pc = 0x14F744u;
            return;
        }
    }
    ctx->pc = 0x14F740u;
}
