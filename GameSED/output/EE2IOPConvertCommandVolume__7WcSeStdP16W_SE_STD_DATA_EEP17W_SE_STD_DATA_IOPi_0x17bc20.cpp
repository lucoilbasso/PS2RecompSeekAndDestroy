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

// Function: EE2IOPConvertCommandVolume__7WcSeStdP16W_SE_STD_DATA_EEP17W_SE_STD_DATA_IOPi
// Address: 0x17bc20 - 0x17bc88
void EE2IOPConvertCommandVolume__7WcSeStdP16W_SE_STD_DATA_EEP17W_SE_STD_DATA_IOPi_0x17bc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EE2IOPConvertCommandVolume__7WcSeStdP16W_SE_STD_DATA_EEP17W_SE_STD_DATA_IOPi_0x17bc20");
#endif

    ctx->pc = 0x17bc20u;

    // 0x17bc20: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x17bc20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x17bc24: 0x24037fff  addiu       $v1, $zero, 0x7FFF
    ctx->pc = 0x17bc24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x17bc28: 0xe23818  mult        $a3, $a3, $v0
    ctx->pc = 0x17bc28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x17bc2c: 0x73bc3  sra         $a3, $a3, 15
    ctx->pc = 0x17bc2cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 15));
    // 0x17bc30: 0xacc70010  sw          $a3, 0x10($a2)
    ctx->pc = 0x17bc30u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 7));
    // 0x17bc34: 0xacc7000c  sw          $a3, 0xC($a2)
    ctx->pc = 0x17bc34u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 7));
    // 0x17bc38: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x17bc38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x17bc3c: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x17bc3cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x17bc40: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17BC40u;
    {
        const bool branch_taken_0x17bc40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17BC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BC40u;
        // 0x17bc44: 0xe22018  mult        $a0, $a3, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bc40) {
            ctx->pc = 0x17BC50u;
            goto label_17bc50;
        }
    }
    ctx->pc = 0x17BC48u;
    // 0x17bc48: 0x413c3  sra         $v0, $a0, 15
    ctx->pc = 0x17bc48u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 15));
    // 0x17bc4c: 0xacc20010  sw          $v0, 0x10($a2)
    ctx->pc = 0x17bc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 2));
label_17bc50:
    // 0x17bc50: 0x8ca5000c  lw          $a1, 0xC($a1)
    ctx->pc = 0x17bc50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x17bc54: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x17bc54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x17bc58: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x17bc58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x17bc5c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x17BC5Cu;
    {
        const bool branch_taken_0x17bc5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17bc5c) {
            ctx->pc = 0x17BC60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17BC5Cu;
            // 0x17bc60: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17BC7Cu;
            goto label_17bc7c;
        }
    }
    ctx->pc = 0x17BC64u;
    // 0x17bc64: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x17bc64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x17bc68: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x17bc68u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x17bc6c: 0xe21018  mult        $v0, $a3, $v0
    ctx->pc = 0x17bc6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x17bc70: 0x213c3  sra         $v0, $v0, 15
    ctx->pc = 0x17bc70u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 15));
    // 0x17bc74: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x17bc74u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x17bc78: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x17bc78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_17bc7c:
    // 0x17bc7c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x17bc7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x17bc80: 0x3e00008  jr          $ra
    ctx->pc = 0x17BC80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BC80u;
        // 0x17bc84: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BC80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17BC88u;
}
