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

// Function: entry_001802b8
// Address: 0x1802b8 - 0x1802f8
void entry_001802b8_0x1802b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001802b8_0x1802b8");
#endif

    ctx->pc = 0x1802b8u;

label_1802b8:
    // 0x1802b8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1802b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1802bc: 0xa4480000  sh          $t0, 0x0($v0)
    ctx->pc = 0x1802bcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x1802c0: 0x0  nop
    ctx->pc = 0x1802c0u;
    // NOP
    // 0x1802c4: 0x0  nop
    ctx->pc = 0x1802c4u;
    // NOP
    // 0x1802c8: 0x0  nop
    ctx->pc = 0x1802c8u;
    // NOP
    // 0x1802cc: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1802CCu;
    {
        const bool branch_taken_0x1802cc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1802D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1802CCu;
        // 0x1802d0: 0x2442ff00  addiu       $v0, $v0, -0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1802cc) {
            ctx->pc = 0x1802B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1802b8;
        }
    }
    ctx->pc = 0x1802D4u;
    // 0x1802d4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1802d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1802d8: 0x28c20080  slti        $v0, $a2, 0x80
    ctx->pc = 0x1802d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x1802dc: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1802DCu;
    {
        const bool branch_taken_0x1802dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1802E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1802DCu;
        // 0x1802e0: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1802dc) {
            ctx->pc = 0x1802B0u;
            return;
        }
    }
    ctx->pc = 0x1802E4u;
    // 0x1802e4: 0x94e20022  lhu         $v0, 0x22($a3)
    ctx->pc = 0x1802e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 34)));
    // 0x1802e8: 0x24a40030  addiu       $a0, $a1, 0x30
    ctx->pc = 0x1802e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x1802ec: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1802ECu;
    {
        const bool branch_taken_0x1802ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1802F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1802ECu;
        // 0x1802f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1802ec) {
            ctx->pc = 0x180330u;
            return;
        }
    }
    ctx->pc = 0x1802F4u;
    // 0x1802f4: 0x24e80008  addiu       $t0, $a3, 0x8
    ctx->pc = 0x1802f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    ctx->pc = 0x1802f8u;
}
