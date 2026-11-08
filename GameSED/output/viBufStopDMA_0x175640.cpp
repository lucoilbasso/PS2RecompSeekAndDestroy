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

// Function: viBufStopDMA
// Address: 0x175640 - 0x175740
void viBufStopDMA_0x175640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("viBufStopDMA_0x175640");
#endif

    switch (ctx->pc) {
        case 0x175658u: goto label_175658;
        case 0x175664u: goto label_175664;
        case 0x1756b0u: goto label_1756b0;
        case 0x1756d4u: goto label_1756d4;
        case 0x17572cu: goto label_17572c;
        default: break;
    }

    ctx->pc = 0x175640u;

    // 0x175640: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x175640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x175644: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x175644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x175648: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x175648u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17564c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x17564cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x175650: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x175650u;
    SET_GPR_U32(ctx, 31, 0x175658u);
    ctx->pc = 0x175654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175650u;
    // 0x175654: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x175650u, 0x175658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175658u;
label_175658:
    // 0x175658: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x175658u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x17565c: 0xc05d426  jal         func_175098
    ctx->pc = 0x17565Cu;
    SET_GPR_U32(ctx, 31, 0x175664u);
    ctx->pc = 0x175660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17565Cu;
    // 0x175660: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175098u, 0x17565Cu, 0x175664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175664u;
label_175664:
    // 0x175664: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x175664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x175668: 0x3442b410  ori         $v0, $v0, 0xB410
    ctx->pc = 0x175668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46096);
    // 0x17566c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x17566cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x175670: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x175670u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000B410u));
    // 0x175674: 0x3484b430  ori         $a0, $a0, 0xB430
    ctx->pc = 0x175674u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46128);
    // 0x175678: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x175678u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x17567c: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x17567cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x175680: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x175680u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x175684: 0x34a5b420  ori         $a1, $a1, 0xB420
    ctx->pc = 0x175684u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)46112);
    // 0x175688: 0x34c6b400  ori         $a2, $a2, 0xB400
    ctx->pc = 0x175688u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)46080);
    // 0x17568c: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x17568cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x175690: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x175690u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000B430u));
    // 0x175694: 0x34e72010  ori         $a3, $a3, 0x2010
    ctx->pc = 0x175694u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8208);
    // 0x175698: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x175698u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x17569c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x17569cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000B420u));
    // 0x1756a0: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x1756a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x1756a4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1756a4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000B400u));
    // 0x1756a8: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x1756a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x1756ac: 0x0  nop
    ctx->pc = 0x1756acu;
    // NOP
label_1756b0:
    // 0x1756b0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1756b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1756b4: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x1756b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x1756b8: 0x0  nop
    ctx->pc = 0x1756b8u;
    // NOP
    // 0x1756bc: 0x0  nop
    ctx->pc = 0x1756bcu;
    // NOP
    // 0x1756c0: 0x0  nop
    ctx->pc = 0x1756c0u;
    // NOP
    // 0x1756c4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1756C4u;
    {
        const bool branch_taken_0x1756c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1756c4) {
            ctx->pc = 0x1756B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1756b0;
        }
    }
    ctx->pc = 0x1756CCu;
    // 0x1756cc: 0xc05d40c  jal         func_175030
    ctx->pc = 0x1756CCu;
    SET_GPR_U32(ctx, 31, 0x1756D4u);
    ctx->pc = 0x1756D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1756CCu;
    // 0x1756d0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175030u, 0x1756CCu, 0x1756D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1756D4u;
label_1756d4:
    // 0x1756d4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1756d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1756d8: 0x3442b010  ori         $v0, $v0, 0xB010
    ctx->pc = 0x1756d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45072);
    // 0x1756dc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1756dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1756e0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1756e0u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x1000B010u));
    // 0x1756e4: 0x3463b020  ori         $v1, $v1, 0xB020
    ctx->pc = 0x1756e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45088);
    // 0x1756e8: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x1756e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x1756ec: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x1756ecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x1756f0: 0xae04002c  sw          $a0, 0x2C($s0)
    ctx->pc = 0x1756f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 4));
    // 0x1756f4: 0x34c6b000  ori         $a2, $a2, 0xB000
    ctx->pc = 0x1756f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)45056);
    // 0x1756f8: 0x34e72020  ori         $a3, $a3, 0x2020
    ctx->pc = 0x1756f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8224);
    // 0x1756fc: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x1756fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x175700: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x175700u;
    SET_GPR_S32(ctx, 8, (int32_t)runtime->Load32(rdram, ctx, 0x1000B020u));
    // 0x175704: 0x34a52010  ori         $a1, $a1, 0x2010
    ctx->pc = 0x175704u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8208);
    // 0x175708: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x175708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x17570c: 0xae080030  sw          $t0, 0x30($s0)
    ctx->pc = 0x17570cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 8));
    // 0x175710: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x175710u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000B000u));
    // 0x175714: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x175714u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x175718: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x175718u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002020u));
    // 0x17571c: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x17571cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
    // 0x175720: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x175720u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u));
    // 0x175724: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x175724u;
    SET_GPR_U32(ctx, 31, 0x17572Cu);
    ctx->pc = 0x175728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175724u;
    // 0x175728: 0xae02003c  sw          $v0, 0x3C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x175724u, 0x17572Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17572Cu;
label_17572c:
    // 0x17572c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17572cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x175730: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x175730u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175734: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x175734u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x175738: 0x3e00008  jr          $ra
    ctx->pc = 0x175738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17573Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175738u;
        // 0x17573c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175738u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x175740u;
}
