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

// Function: entry_00178908
// Address: 0x178908 - 0x178950
void entry_00178908_0x178908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178908_0x178908");
#endif

    ctx->pc = 0x178908u;

    // 0x178908: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x178908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17890c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x17890cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178910: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x178910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x178914: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x178914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x178918: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x178918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x17891c: 0x8c510024  lw          $s1, 0x24($v0)
    ctx->pc = 0x17891cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x178920: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x178920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x178924: 0x8e221040  lw          $v0, 0x1040($s1)
    ctx->pc = 0x178924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4160)));
    // 0x178928: 0x8c850040  lw          $a1, 0x40($a0)
    ctx->pc = 0x178928u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x17892c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x17892cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x178930: 0xae221040  sw          $v0, 0x1040($s1)
    ctx->pc = 0x178930u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4160), GPR_U32(ctx, 2));
    // 0x178934: 0xa39021  addu        $s2, $a1, $v1
    ctx->pc = 0x178934u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x178938: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x178938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x17893c: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x17893Cu;
    {
        const bool branch_taken_0x17893c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17893c) {
            ctx->pc = 0x178940u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17893Cu;
            // 0x178940: 0x8e060050  lw          $a2, 0x50($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x178950u;
            return;
        }
    }
    ctx->pc = 0x178944u;
    // 0x178944: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x178944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x178948: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x178948u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x17894c: 0x8e060050  lw          $a2, 0x50($s0)
    ctx->pc = 0x17894cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    ctx->pc = 0x178950u;
}
