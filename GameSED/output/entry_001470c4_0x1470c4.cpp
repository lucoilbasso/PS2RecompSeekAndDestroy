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

// Function: entry_001470c4
// Address: 0x1470c4 - 0x147188
void entry_001470c4_0x1470c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001470c4_0x1470c4");
#endif

    switch (ctx->pc) {
        case 0x147180u: goto label_147180;
        default: break;
    }

    ctx->pc = 0x1470c4u;

    // 0x1470c4: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x1470c4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1470c8: 0xae11001c  sw          $s1, 0x1C($s0)
    ctx->pc = 0x1470c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
    // 0x1470cc: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x1470ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1470d0: 0x3c060007  lui         $a2, 0x7
    ctx->pc = 0x1470d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)7 << 16));
    // 0x1470d4: 0x34c6000d  ori         $a2, $a2, 0xD
    ctx->pc = 0x1470d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)13);
    // 0x1470d8: 0x24050047  addiu       $a1, $zero, 0x47
    ctx->pc = 0x1470d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x1470dc: 0x34088000  ori         $t0, $zero, 0x8000
    ctx->pc = 0x1470dcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1470e0: 0x8437c  dsll32      $t0, $t0, 13
    ctx->pc = 0x1470e0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 13));
    // 0x1470e4: 0x24470010  addiu       $a3, $v0, 0x10
    ctx->pc = 0x1470e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1470e8: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x1470e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1470ec: 0x24510060  addiu       $s1, $v0, 0x60
    ctx->pc = 0x1470ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x1470f0: 0xaea20008  sw          $v0, 0x8($s5)
    ctx->pc = 0x1470f0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 2));
    // 0x1470f4: 0x2271823  subu        $v1, $s1, $a3
    ctx->pc = 0x1470f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x1470f8: 0xfc850008  sd          $a1, 0x8($a0)
    ctx->pc = 0x1470f8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 5));
    // 0x1470fc: 0xfc860000  sd          $a2, 0x0($a0)
    ctx->pc = 0x1470fcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 6));
    // 0x147100: 0x2404004e  addiu       $a0, $zero, 0x4E
    ctx->pc = 0x147100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x147104: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x147104u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x147108: 0x244a0030  addiu       $t2, $v0, 0x30
    ctx->pc = 0x147108u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x14710c: 0xdf8d8c80  ld          $t5, -0x7380($gp)
    ctx->pc = 0x14710cu;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 28), 4294937728)));
    // 0x147110: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x147110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x147114: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x147114u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x147118: 0x2408000e  addiu       $t0, $zero, 0xE
    ctx->pc = 0x147118u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x14711c: 0x24490040  addiu       $t1, $v0, 0x40
    ctx->pc = 0x14711cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x147120: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x147120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x147124: 0x240b0080  addiu       $t3, $zero, 0x80
    ctx->pc = 0x147124u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x147128: 0xb583c  dsll32      $t3, $t3, 0
    ctx->pc = 0x147128u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 0));
    // 0x14712c: 0x356b8080  ori         $t3, $t3, 0x8080
    ctx->pc = 0x14712cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)32896);
    // 0x147130: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x147130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x147134: 0x240c0044  addiu       $t4, $zero, 0x44
    ctx->pc = 0x147134u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x147138: 0x24060042  addiu       $a2, $zero, 0x42
    ctx->pc = 0x147138u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x14713c: 0xfd440008  sd          $a0, 0x8($t2)
    ctx->pc = 0x14713cu;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 4));
    // 0x147140: 0xfd4d0000  sd          $t5, 0x0($t2)
    ctx->pc = 0x147140u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 13));
    // 0x147144: 0xfd250008  sd          $a1, 0x8($t1)
    ctx->pc = 0x147144u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 5));
    // 0x147148: 0xfd2b0000  sd          $t3, 0x0($t1)
    ctx->pc = 0x147148u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 11));
    // 0x14714c: 0xfc460008  sd          $a2, 0x8($v0)
    ctx->pc = 0x14714cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 6));
    // 0x147150: 0xac4c0000  sw          $t4, 0x0($v0)
    ctx->pc = 0x147150u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 12));
    // 0x147154: 0xfce80008  sd          $t0, 0x8($a3)
    ctx->pc = 0x147154u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 8));
    // 0x147158: 0xfce30000  sd          $v1, 0x0($a3)
    ctx->pc = 0x147158u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
    // 0x14715c: 0x8ec300b0  lw          $v1, 0xB0($s6)
    ctx->pc = 0x14715cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 176)));
    // 0x147160: 0x31203  sra         $v0, $v1, 8
    ctx->pc = 0x147160u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 8));
    // 0x147164: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x147164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x147168: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x147168u;
    {
        const bool branch_taken_0x147168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14716Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147168u;
        // 0x14716c: 0x31283  sra         $v0, $v1, 10 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147168) {
            ctx->pc = 0x147188u;
            return;
        }
    }
    ctx->pc = 0x147170u;
    // 0x147170: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x147170u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147174: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x147174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147178: 0xc051a64  jal         func_146990
    ctx->pc = 0x147178u;
    SET_GPR_U32(ctx, 31, 0x147180u);
    ctx->pc = 0x14717Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147178u;
    // 0x14717c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146990u, 0x147178u, 0x147180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147180u;
label_147180:
    // 0x147180: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x147180u;
    {
        const bool branch_taken_0x147180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147180u;
        // 0x147184: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147180) {
            ctx->pc = 0x147248u;
            return;
        }
    }
    ctx->pc = 0x147188u;
}
