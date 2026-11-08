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

// Function: entry_0011cbb8
// Address: 0x11cbb8 - 0x11cbec
void entry_0011cbb8_0x11cbb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011cbb8_0x11cbb8");
#endif

    ctx->pc = 0x11cbb8u;

label_11cbb8:
    // 0x11cbb8: 0xdc440000  ld          $a0, 0x0($v0)
    ctx->pc = 0x11cbb8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11cbbc: 0xdc470008  ld          $a3, 0x8($v0)
    ctx->pc = 0x11cbbcu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x11cbc0: 0xdc480010  ld          $t0, 0x10($v0)
    ctx->pc = 0x11cbc0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x11cbc4: 0xdc490018  ld          $t1, 0x18($v0)
    ctx->pc = 0x11cbc4u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x11cbc8: 0xfcc40000  sd          $a0, 0x0($a2)
    ctx->pc = 0x11cbc8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x11cbcc: 0xfcc70008  sd          $a3, 0x8($a2)
    ctx->pc = 0x11cbccu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 7));
    // 0x11cbd0: 0xfcc80010  sd          $t0, 0x10($a2)
    ctx->pc = 0x11cbd0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 8));
    // 0x11cbd4: 0xfcc90018  sd          $t1, 0x18($a2)
    ctx->pc = 0x11cbd4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 9));
    // 0x11cbd8: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x11cbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x11cbdc: 0x0  nop
    ctx->pc = 0x11cbdcu;
    // NOP
    // 0x11cbe0: 0x0  nop
    ctx->pc = 0x11cbe0u;
    // NOP
    // 0x11cbe4: 0x1445fff4  bne         $v0, $a1, . + 4 + (-0xC << 2)
    ctx->pc = 0x11CBE4u;
    {
        const bool branch_taken_0x11cbe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x11CBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CBE4u;
        // 0x11cbe8: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cbe4) {
            ctx->pc = 0x11CBB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11cbb8;
        }
    }
    ctx->pc = 0x11CBECu;
}
