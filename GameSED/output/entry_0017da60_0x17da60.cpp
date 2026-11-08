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

// Function: entry_0017da60
// Address: 0x17da60 - 0x17dac0
void entry_0017da60_0x17da60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017da60_0x17da60");
#endif

    ctx->pc = 0x17da60u;

    // 0x17da60: 0x96a50008  lhu         $a1, 0x8($s5)
    ctx->pc = 0x17da60u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x17da64: 0x3c040054  lui         $a0, 0x54
    ctx->pc = 0x17da64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)84 << 16));
    // 0x17da68: 0x9562fff8  lhu         $v0, -0x8($t3)
    ctx->pc = 0x17da68u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 4294967288)));
    // 0x17da6c: 0x34844352  ori         $a0, $a0, 0x4352
    ctx->pc = 0x17da6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)17234);
    // 0x17da70: 0x95630000  lhu         $v1, 0x0($t3)
    ctx->pc = 0x17da70u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x17da74: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x17da74u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x17da78: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x17da78u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x17da7c: 0xa5620024  sh          $v0, 0x24($t3)
    ctx->pc = 0x17da7cu;
    WRITE16(ADD32(GPR_U32(ctx, 11), 36), (uint16_t)GPR_U32(ctx, 2));
    // 0x17da80: 0xa5630026  sh          $v1, 0x26($t3)
    ctx->pc = 0x17da80u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 38), (uint16_t)GPR_U32(ctx, 3));
    // 0x17da84: 0x8d820010  lw          $v0, 0x10($t4)
    ctx->pc = 0x17da84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 16)));
    // 0x17da88: 0x5444000d  bnel        $v0, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x17DA88u;
    {
        const bool branch_taken_0x17da88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x17da88) {
            ctx->pc = 0x17DA8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17DA88u;
            // 0x17da8c: 0x95630014  lhu         $v1, 0x14($t3) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17DAC0u;
            return;
        }
    }
    ctx->pc = 0x17DA90u;
    // 0x17da90: 0x95820014  lhu         $v0, 0x14($t4)
    ctx->pc = 0x17da90u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 20)));
    // 0x17da94: 0xa5620008  sh          $v0, 0x8($t3)
    ctx->pc = 0x17da94u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x17da98: 0x95830016  lhu         $v1, 0x16($t4)
    ctx->pc = 0x17da98u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 22)));
    // 0x17da9c: 0xa563000a  sh          $v1, 0xA($t3)
    ctx->pc = 0x17da9cu;
    WRITE16(ADD32(GPR_U32(ctx, 11), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x17daa0: 0x95820018  lhu         $v0, 0x18($t4)
    ctx->pc = 0x17daa0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 24)));
    // 0x17daa4: 0xa562000c  sh          $v0, 0xC($t3)
    ctx->pc = 0x17daa4u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x17daa8: 0x9583001a  lhu         $v1, 0x1A($t4)
    ctx->pc = 0x17daa8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 26)));
    // 0x17daac: 0xa563000e  sh          $v1, 0xE($t3)
    ctx->pc = 0x17daacu;
    WRITE16(ADD32(GPR_U32(ctx, 11), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x17dab0: 0x9582001c  lhu         $v0, 0x1C($t4)
    ctx->pc = 0x17dab0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 28)));
    // 0x17dab4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x17DAB4u;
    {
        const bool branch_taken_0x17dab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DAB4u;
        // 0x17dab8: 0xa5620028  sh          $v0, 0x28($t3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 11), 40), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dab4) {
            ctx->pc = 0x17DB14u;
            return;
        }
    }
    ctx->pc = 0x17DABCu;
    // 0x17dabc: 0x0  nop
    ctx->pc = 0x17dabcu;
    // NOP
    ctx->pc = 0x17dac0u;
}
