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

// Function: entry_001751b8
// Address: 0x1751b8 - 0x1751e8
void entry_001751b8_0x1751b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001751b8_0x1751b8");
#endif

    ctx->pc = 0x1751b8u;

    // 0x1751b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1751b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1751bc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1751bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1751c0: 0xae220044  sw          $v0, 0x44($s1)
    ctx->pc = 0x1751c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
    // 0x1751c4: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x1751c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x1751c8: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1751c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x1751cc: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x1751ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x1751d0: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x1751d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x1751d4: 0xae200058  sw          $zero, 0x58($s1)
    ctx->pc = 0x1751d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
    // 0x1751d8: 0x18600014  blez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1751D8u;
    {
        const bool branch_taken_0x1751d8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1751DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1751D8u;
        // 0x1751dc: 0xae20005c  sw          $zero, 0x5C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1751d8) {
            ctx->pc = 0x17522Cu;
            return;
        }
    }
    ctx->pc = 0x1751E0u;
    // 0x1751e0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1751e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1751e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1751e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1751e8u;
}
