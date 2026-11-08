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

// Function: entry_001956bc
// Address: 0x1956bc - 0x195718
void entry_001956bc_0x1956bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001956bc_0x1956bc");
#endif

    ctx->pc = 0x1956bcu;

    // 0x1956bc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1956bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1956c0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1956c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1956c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1956c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1956c8: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x1956c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1956cc: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x1956ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x1956d0: 0x14400072  bnez        $v0, . + 4 + (0x72 << 2)
    ctx->pc = 0x1956D0u;
    {
        const bool branch_taken_0x1956d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1956D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1956D0u;
        // 0x1956d4: 0x8cb3015c  lw          $s3, 0x15C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1956d0) {
            ctx->pc = 0x19589Cu;
            return;
        }
    }
    ctx->pc = 0x1956D8u;
    // 0x1956d8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1956d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1956dc: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x1956dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x1956e0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1956e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1956e4: 0x5440006e  bnel        $v0, $zero, . + 4 + (0x6E << 2)
    ctx->pc = 0x1956E4u;
    {
        const bool branch_taken_0x1956e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1956e4) {
            ctx->pc = 0x1956E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1956E4u;
            // 0x1956e8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1958A0u;
            return;
        }
    }
    ctx->pc = 0x1956ECu;
    // 0x1956ec: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1956ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1956f0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1956f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1956f4: 0x5440006a  bnel        $v0, $zero, . + 4 + (0x6A << 2)
    ctx->pc = 0x1956F4u;
    {
        const bool branch_taken_0x1956f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1956f4) {
            ctx->pc = 0x1956F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1956F4u;
            // 0x1956f8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1958A0u;
            return;
        }
    }
    ctx->pc = 0x1956FCu;
    // 0x1956fc: 0x26110020  addiu       $s1, $s0, 0x20
    ctx->pc = 0x1956fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x195700: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x195700u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x195704: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x195704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x195708: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x195708u;
    {
        const bool branch_taken_0x195708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x195708) {
            ctx->pc = 0x195718u;
            return;
        }
    }
    ctx->pc = 0x195710u;
    // 0x195710: 0xc061920  jal         func_186480
    ctx->pc = 0x195710u;
    SET_GPR_U32(ctx, 31, 0x195718u);
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x195710u, 0x195718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195718u;
}
