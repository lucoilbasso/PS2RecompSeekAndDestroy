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

// Function: entry_001d45fc
// Address: 0x1d45fc - 0x1d4664
void entry_001d45fc_0x1d45fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d45fc_0x1d45fc");
#endif

    switch (ctx->pc) {
        case 0x1d460cu: goto label_1d460c;
        default: break;
    }

    ctx->pc = 0x1d45fcu;

    // 0x1d45fc: 0x120000b2  beqz        $s0, . + 4 + (0xB2 << 2)
    ctx->pc = 0x1D45FCu;
    {
        const bool branch_taken_0x1d45fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D45FCu;
        // 0x1d4600: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d45fc) {
            ctx->pc = 0x1D48C8u;
            return;
        }
    }
    ctx->pc = 0x1D4604u;
    // 0x1d4604: 0xc074066  jal         func_1D0198
    ctx->pc = 0x1D4604u;
    SET_GPR_U32(ctx, 31, 0x1D460Cu);
    ctx->pc = 0x1D0198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0198u, 0x1D4604u, 0x1D460Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D460Cu;
label_1d460c:
    // 0x1d460c: 0x2609fff8  addiu       $t1, $s0, -0x8
    ctx->pc = 0x1d460cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    // 0x1d4610: 0x8d260004  lw          $a2, 0x4($t1)
    ctx->pc = 0x1d4610u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x1d4614: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1d4614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1d4618: 0x3c0c0025  lui         $t4, 0x25
    ctx->pc = 0x1d4618u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)37 << 16));
    // 0x1d461c: 0x2404fffc  addiu       $a0, $zero, -0x4
    ctx->pc = 0x1d461cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1d4620: 0xc24024  and         $t0, $a2, $v0
    ctx->pc = 0x1d4620u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1d4624: 0x258ae1b8  addiu       $t2, $t4, -0x1E48
    ctx->pc = 0x1d4624u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 12), 4294959544));
    // 0x1d4628: 0x1282821  addu        $a1, $t1, $t0
    ctx->pc = 0x1d4628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x1d462c: 0x8d430008  lw          $v1, 0x8($t2)
    ctx->pc = 0x1d462cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x1d4630: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1d4630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1d4634: 0x14a3001e  bne         $a1, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x1D4634u;
    {
        const bool branch_taken_0x1d4634 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x1D4638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4634u;
        // 0x1d4638: 0x442024  and         $a0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4634) {
            ctx->pc = 0x1D46B0u;
            return;
        }
    }
    ctx->pc = 0x1D463Cu;
    // 0x1d463c: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x1d463cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x1d4640: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D4640u;
    {
        const bool branch_taken_0x1d4640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4640u;
        // 0x1d4644: 0x1044021  addu        $t0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4640) {
            ctx->pc = 0x1D4664u;
            return;
        }
    }
    ctx->pc = 0x1D4648u;
    // 0x1d4648: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x1d4648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d464c: 0x1234823  subu        $t1, $t1, $v1
    ctx->pc = 0x1d464cu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x1d4650: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x1d4650u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1d4654: 0x8d27000c  lw          $a3, 0xC($t1)
    ctx->pc = 0x1d4654u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x1d4658: 0x8d260008  lw          $a2, 0x8($t1)
    ctx->pc = 0x1d4658u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x1d465c: 0xacc7000c  sw          $a3, 0xC($a2)
    ctx->pc = 0x1d465cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 7));
    // 0x1d4660: 0xace60008  sw          $a2, 0x8($a3)
    ctx->pc = 0x1d4660u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 6));
    ctx->pc = 0x1d4664u;
}
