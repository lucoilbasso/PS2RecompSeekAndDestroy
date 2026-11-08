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

// Function: entry_00196710
// Address: 0x196710 - 0x196788
void entry_00196710_0x196710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00196710_0x196710");
#endif

    ctx->pc = 0x196710u;

    // 0x196710: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x196710u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196714: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x196714u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x196718: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x196718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x19671c: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x19671cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196720: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x196720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x196724: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x196724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x196728: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x196728u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x19672c: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x19672cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x196730: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x196730u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x196734: 0x34e78001  ori         $a3, $a3, 0x8001
    ctx->pc = 0x196734u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32769);
    // 0x196738: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x196738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x19673c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x19673cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x196740: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x196740u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x196744: 0xfca30008  sd          $v1, 0x8($a1)
    ctx->pc = 0x196744u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 3));
    // 0x196748: 0xfca70000  sd          $a3, 0x0($a1)
    ctx->pc = 0x196748u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 7));
    // 0x19674c: 0xfd040008  sd          $a0, 0x8($t0)
    ctx->pc = 0x19674cu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 4));
    // 0x196750: 0xfd000000  sd          $zero, 0x0($t0)
    ctx->pc = 0x196750u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 0));
    // 0x196754: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x196754u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x196758: 0x1131023  subu        $v0, $t0, $s3
    ctx->pc = 0x196758u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 19)));
    // 0x19675c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x19675cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x196760: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x196760u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x196764: 0x284200a1  slti        $v0, $v0, 0xA1
    ctx->pc = 0x196764u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)161) ? 1 : 0);
    // 0x196768: 0x34630400  ori         $v1, $v1, 0x400
    ctx->pc = 0x196768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
    // 0x19676c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19676Cu;
    {
        const bool branch_taken_0x19676c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x196770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19676Cu;
        // 0x196770: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19676c) {
            ctx->pc = 0x196788u;
            return;
        }
    }
    ctx->pc = 0x196774u;
    // 0x196774: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x196774u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x196778: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x196778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19677c: 0x24a58358  addiu       $a1, $a1, -0x7CA8
    ctx->pc = 0x19677cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935384));
    // 0x196780: 0xc068186  jal         func_1A0618
    ctx->pc = 0x196780u;
    SET_GPR_U32(ctx, 31, 0x196788u);
    ctx->pc = 0x196784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196780u;
    // 0x196784: 0x2406001b  addiu       $a2, $zero, 0x1B (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x196780u, 0x196788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196788u;
}
