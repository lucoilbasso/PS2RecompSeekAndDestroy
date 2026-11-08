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

// Function: caseD_6
// Address: 0x107ad0 - 0x107af8
void caseD_6_0x107ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x107ad0");
#endif

    ctx->pc = 0x107ad0u;

    // 0x107ad0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x107ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x107ad4: 0x24030076  addiu       $v1, $zero, 0x76
    ctx->pc = 0x107ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
    // 0x107ad8: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x107ad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x107adc: 0x5443000a  bnel        $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x107ADCu;
    {
        const bool branch_taken_0x107adc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x107adc) {
            ctx->pc = 0x107AE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107ADCu;
            // 0x107ae0: 0x30830fff  andi        $v1, $a0, 0xFFF (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
            ctx->in_delay_slot = false;
            ctx->pc = 0x107B08u;
            return;
        }
    }
    ctx->pc = 0x107AE4u;
    // 0x107ae4: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x107AE4u;
    {
        const bool branch_taken_0x107ae4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x107AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107AE4u;
        // 0x107ae8: 0x96020200  lhu         $v0, 0x200($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 512)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107ae4) {
            ctx->pc = 0x107AF8u;
            return;
        }
    }
    ctx->pc = 0x107AECu;
    // 0x107aec: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x107aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x107af0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x107AF0u;
    {
        const bool branch_taken_0x107af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107AF0u;
        // 0x107af4: 0xa6020200  sh          $v0, 0x200($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 512), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107af0) {
            ctx->pc = 0x107B34u;
            return;
        }
    }
    ctx->pc = 0x107AF8u;
}
