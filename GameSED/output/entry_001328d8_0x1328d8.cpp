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

// Function: entry_001328d8
// Address: 0x1328d8 - 0x132918
void entry_001328d8_0x1328d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001328d8_0x1328d8");
#endif

    ctx->pc = 0x1328d8u;

    // 0x1328d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1328d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1328dc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1328dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1328e0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1328e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1328e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1328e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1328e8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1328e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1328ec: 0x8cc20154  lw          $v0, 0x154($a2)
    ctx->pc = 0x1328ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 340)));
    // 0x1328f0: 0x8c430088  lw          $v1, 0x88($v0)
    ctx->pc = 0x1328f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x1328f4: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x1328f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x1328f8: 0x8c8402f8  lw          $a0, 0x2F8($a0)
    ctx->pc = 0x1328f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 760)));
    // 0x1328fc: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x1328FCu;
    {
        const bool branch_taken_0x1328fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x132900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1328FCu;
        // 0x132900: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1328fc) {
            ctx->pc = 0x132930u;
            return;
        }
    }
    ctx->pc = 0x132904u;
    // 0x132904: 0x8c900150  lw          $s0, 0x150($a0)
    ctx->pc = 0x132904u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x132908: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x132908u;
    {
        const bool branch_taken_0x132908 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x132908) {
            ctx->pc = 0x13290Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x132908u;
            // 0x13290c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x132934u;
            return;
        }
    }
    ctx->pc = 0x132910u;
    // 0x132910: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x132910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132914: 0x0  nop
    ctx->pc = 0x132914u;
    // NOP
    ctx->pc = 0x132918u;
}
