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

// Function: entry_00122cc8
// Address: 0x122cc8 - 0x122d10
void entry_00122cc8_0x122cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122cc8_0x122cc8");
#endif

    ctx->pc = 0x122cc8u;

    // 0x122cc8: 0x5460009a  bnel        $v1, $zero, . + 4 + (0x9A << 2)
    ctx->pc = 0x122CC8u;
    {
        const bool branch_taken_0x122cc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x122cc8) {
            ctx->pc = 0x122CCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x122CC8u;
            // 0x122ccc: 0x8fa40078  lw          $a0, 0x78($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x122F34u;
            return;
        }
    }
    ctx->pc = 0x122CD0u;
    // 0x122cd0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x122cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122cd4: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x122CD4u;
    {
        const bool branch_taken_0x122cd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x122CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122CD4u;
        // 0x122cd8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122cd4) {
            ctx->pc = 0x122DB8u;
            return;
        }
    }
    ctx->pc = 0x122CDCu;
    // 0x122cdc: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x122cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x122ce0: 0x2474d650  addiu       $s4, $v1, -0x29B0
    ctx->pc = 0x122ce0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956624));
    // 0x122ce4: 0x8e820094  lw          $v0, 0x94($s4)
    ctx->pc = 0x122ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D6E4u));
    // 0x122ce8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x122CE8u;
    {
        const bool branch_taken_0x122ce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x122CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122CE8u;
        // 0x122cec: 0x8fb10074  lw          $s1, 0x74($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122ce8) {
            ctx->pc = 0x122D10u;
            return;
        }
    }
    ctx->pc = 0x122CF0u;
    // 0x122cf0: 0x8e820098  lw          $v0, 0x98($s4)
    ctx->pc = 0x122cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 152)));
    // 0x122cf4: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x122cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x122cf8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x122cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x122cfc: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x122cfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x122d00: 0x548021  addu        $s0, $v0, $s4
    ctx->pc = 0x122d00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x122d04: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x122D04u;
    {
        const bool branch_taken_0x122d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122D04u;
        // 0x122d08: 0xae830098  sw          $v1, 0x98($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122d04) {
            ctx->pc = 0x122D44u;
            return;
        }
    }
    ctx->pc = 0x122D0Cu;
    // 0x122d0c: 0x0  nop
    ctx->pc = 0x122d0cu;
    // NOP
    ctx->pc = 0x122d10u;
}
