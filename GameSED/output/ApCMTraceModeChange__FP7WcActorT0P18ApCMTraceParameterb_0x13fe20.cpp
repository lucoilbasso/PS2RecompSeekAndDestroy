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

// Function: ApCMTraceModeChange__FP7WcActorT0P18ApCMTraceParameterb
// Address: 0x13fe20 - 0x13ff68
void ApCMTraceModeChange__FP7WcActorT0P18ApCMTraceParameterb_0x13fe20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApCMTraceModeChange__FP7WcActorT0P18ApCMTraceParameterb_0x13fe20");
#endif

    switch (ctx->pc) {
        case 0x13fe50u: goto label_13fe50;
        case 0x13fe90u: goto label_13fe90;
        case 0x13feb8u: goto label_13feb8;
        case 0x13fee8u: goto label_13fee8;
        default: break;
    }

    ctx->pc = 0x13fe20u;

    // 0x13fe20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x13fe20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13fe24: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x13fe24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x13fe28: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x13fe28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fe2c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x13fe2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x13fe30: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x13fe30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x13fe34: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x13fe34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x13fe38: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x13fe38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fe3c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x13fe3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x13fe40: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x13fe40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x13fe44: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x13fe44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x13fe48: 0xc04fbc0  jal         func_13EF00
    ctx->pc = 0x13FE48u;
    SET_GPR_U32(ctx, 31, 0x13FE50u);
    ctx->pc = 0x13FE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FE48u;
    // 0x13fe4c: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13EF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EF00u, 0x13FE48u, 0x13FE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FE50u;
label_13fe50:
    // 0x13fe50: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x13fe50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fe54: 0x3c020014  lui         $v0, 0x14
    ctx->pc = 0x13fe54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20 << 16));
    // 0x13fe58: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x13fe58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x13fe5c: 0x2404fdff  addiu       $a0, $zero, -0x201
    ctx->pc = 0x13fe5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966783));
    // 0x13fe60: 0x2405feff  addiu       $a1, $zero, -0x101
    ctx->pc = 0x13fe60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
    // 0x13fe64: 0x2442ff68  addiu       $v0, $v0, -0x98
    ctx->pc = 0x13fe64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967144));
    // 0x13fe68: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x13fe68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x13fe6c: 0x26440050  addiu       $a0, $s2, 0x50
    ctx->pc = 0x13fe6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x13fe70: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x13fe70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x13fe74: 0x265400c0  addiu       $s4, $s2, 0xC0
    ctx->pc = 0x13fe74u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
    // 0x13fe78: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x13fe78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
    // 0x13fe7c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x13fe7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fe80: 0xae43001c  sw          $v1, 0x1C($s2)
    ctx->pc = 0x13fe80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 3));
    // 0x13fe84: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x13fe84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fe88: 0xc05053c  jal         func_1414F0
    ctx->pc = 0x13FE88u;
    SET_GPR_U32(ctx, 31, 0x13FE90u);
    ctx->pc = 0x13FE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FE88u;
    // 0x13fe8c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1414F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1414F0u, 0x13FE88u, 0x13FE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FE90u;
label_13fe90:
    // 0x13fe90: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x13fe90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fe94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13fe94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fe98: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x13FE98u;
    {
        const bool branch_taken_0x13fe98 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FE98u;
        // 0x13fe9c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fe98) {
            ctx->pc = 0x13FEC0u;
            goto label_13fec0;
        }
    }
    ctx->pc = 0x13FEA0u;
    // 0x13fea0: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x13fea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x13fea4: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x13fea4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x13fea8: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x13fea8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x13feac: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x13feacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x13feb0: 0xc050a66  jal         func_142998
    ctx->pc = 0x13FEB0u;
    SET_GPR_U32(ctx, 31, 0x13FEB8u);
    ctx->pc = 0x13FEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FEB0u;
    // 0x13feb4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x142998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142998u, 0x13FEB0u, 0x13FEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FEB8u;
label_13feb8:
    // 0x13feb8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x13FEB8u;
    {
        const bool branch_taken_0x13feb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FEB8u;
        // 0x13febc: 0xde640000  ld          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13feb8) {
            ctx->pc = 0x13FEECu;
            goto label_13feec;
        }
    }
    ctx->pc = 0x13FEC0u;
label_13fec0:
    // 0x13fec0: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x13fec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x13fec4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13FEC4u;
    {
        const bool branch_taken_0x13fec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FEC4u;
        // 0x13fec8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fec4) {
            ctx->pc = 0x13FEE8u;
            goto label_13fee8;
        }
    }
    ctx->pc = 0x13FECCu;
    // 0x13fecc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13feccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fed0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x13fed0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fed4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x13fed4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x13fed8: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x13fed8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x13fedc: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x13fedcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x13fee0: 0xc050a56  jal         func_142958
    ctx->pc = 0x13FEE0u;
    SET_GPR_U32(ctx, 31, 0x13FEE8u);
    ctx->pc = 0x13FEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FEE0u;
    // 0x13fee4: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x142958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142958u, 0x13FEE0u, 0x13FEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FEE8u;
label_13fee8:
    // 0x13fee8: 0xde640000  ld          $a0, 0x0($s3)
    ctx->pc = 0x13fee8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 0)));
label_13feec:
    // 0x13feec: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x13feecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fef0: 0x8e45001c  lw          $a1, 0x1C($s2)
    ctx->pc = 0x13fef0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x13fef4: 0xfe440150  sd          $a0, 0x150($s2)
    ctx->pc = 0x13fef4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 336), GPR_U64(ctx, 4));
    // 0x13fef8: 0x34a53008  ori         $a1, $a1, 0x3008
    ctx->pc = 0x13fef8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)12296);
    // 0x13fefc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x13fefcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13ff00: 0xde630008  ld          $v1, 0x8($s3)
    ctx->pc = 0x13ff00u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x13ff04: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x13ff04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13ff08: 0xfe430158  sd          $v1, 0x158($s2)
    ctx->pc = 0x13ff08u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 344), GPR_U64(ctx, 3));
    // 0x13ff0c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x13ff0cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13ff10: 0xde640010  ld          $a0, 0x10($s3)
    ctx->pc = 0x13ff10u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x13ff14: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x13ff14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13ff18: 0xfe440160  sd          $a0, 0x160($s2)
    ctx->pc = 0x13ff18u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 352), GPR_U64(ctx, 4));
    // 0x13ff1c: 0xde630018  ld          $v1, 0x18($s3)
    ctx->pc = 0x13ff1cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x13ff20: 0xfe430168  sd          $v1, 0x168($s2)
    ctx->pc = 0x13ff20u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 360), GPR_U64(ctx, 3));
    // 0x13ff24: 0xde640020  ld          $a0, 0x20($s3)
    ctx->pc = 0x13ff24u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x13ff28: 0xfe440170  sd          $a0, 0x170($s2)
    ctx->pc = 0x13ff28u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 368), GPR_U64(ctx, 4));
    // 0x13ff2c: 0xde630028  ld          $v1, 0x28($s3)
    ctx->pc = 0x13ff2cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x13ff30: 0xae45001c  sw          $a1, 0x1C($s2)
    ctx->pc = 0x13ff30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 5));
    // 0x13ff34: 0xfe430178  sd          $v1, 0x178($s2)
    ctx->pc = 0x13ff34u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 376), GPR_U64(ctx, 3));
    // 0x13ff38: 0xae400194  sw          $zero, 0x194($s2)
    ctx->pc = 0x13ff38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 0));
    // 0x13ff3c: 0xae4001ac  sw          $zero, 0x1AC($s2)
    ctx->pc = 0x13ff3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 428), GPR_U32(ctx, 0));
    // 0x13ff40: 0xae4001b0  sw          $zero, 0x1B0($s2)
    ctx->pc = 0x13ff40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 432), GPR_U32(ctx, 0));
    // 0x13ff44: 0xae4001b4  sw          $zero, 0x1B4($s2)
    ctx->pc = 0x13ff44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 436), GPR_U32(ctx, 0));
    // 0x13ff48: 0xae4001b8  sw          $zero, 0x1B8($s2)
    ctx->pc = 0x13ff48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 440), GPR_U32(ctx, 0));
    // 0x13ff4c: 0xae4001bc  sw          $zero, 0x1BC($s2)
    ctx->pc = 0x13ff4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 444), GPR_U32(ctx, 0));
    // 0x13ff50: 0xae400198  sw          $zero, 0x198($s2)
    ctx->pc = 0x13ff50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 408), GPR_U32(ctx, 0));
    // 0x13ff54: 0xae40019c  sw          $zero, 0x19C($s2)
    ctx->pc = 0x13ff54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 412), GPR_U32(ctx, 0));
    // 0x13ff58: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x13ff58u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13ff5c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x13ff5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13ff60: 0x3e00008  jr          $ra
    ctx->pc = 0x13FF60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13FF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FF60u;
        // 0x13ff64: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13FF60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13FF68u;
}
