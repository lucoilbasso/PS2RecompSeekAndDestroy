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

// Function: entry_001019bc
// Address: 0x1019bc - 0x101a84
void entry_001019bc_0x1019bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001019bc_0x1019bc");
#endif

    ctx->pc = 0x1019bcu;

    // 0x1019bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1019bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1019c0: 0xa645000c  sh          $a1, 0xC($s2)
    ctx->pc = 0x1019c0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 12), (uint16_t)GPR_U32(ctx, 5));
    // 0x1019c4: 0xa6470008  sh          $a3, 0x8($s2)
    ctx->pc = 0x1019c4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 8), (uint16_t)GPR_U32(ctx, 7));
    // 0x1019c8: 0x26450008  addiu       $a1, $s2, 0x8
    ctx->pc = 0x1019c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x1019cc: 0xa6420022  sh          $v0, 0x22($s2)
    ctx->pc = 0x1019ccu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 34), (uint16_t)GPR_U32(ctx, 2));
    // 0x1019d0: 0x34098000  ori         $t1, $zero, 0x8000
    ctx->pc = 0x1019d0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1019d4: 0x94bbc  dsll32      $t1, $t1, 14
    ctx->pc = 0x1019d4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 14));
    // 0x1019d8: 0xa642000a  sh          $v0, 0xA($s2)
    ctx->pc = 0x1019d8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x1019dc: 0x34088000  ori         $t0, $zero, 0x8000
    ctx->pc = 0x1019dcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1019e0: 0x844f8  dsll        $t0, $t0, 19
    ctx->pc = 0x1019e0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 19);
    // 0x1019e4: 0xa6460020  sh          $a2, 0x20($s2)
    ctx->pc = 0x1019e4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 32), (uint16_t)GPR_U32(ctx, 6));
    // 0x1019e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1019e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1019ec: 0x94a30004  lhu         $v1, 0x4($a1)
    ctx->pc = 0x1019ecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1019f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1019f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1019f4: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x1019f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x1019f8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1019f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1019fc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1019fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x101a00: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x101a00u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x101a04: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x101a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x101a08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x101a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x101a0c: 0x8c42af80  lw          $v0, -0x5080($v0)
    ctx->pc = 0x101a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294946688)));
    // 0x101a10: 0x3c04001f  lui         $a0, 0x1F
    ctx->pc = 0x101a10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)31 << 16));
    // 0x101a14: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x101a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x101a18: 0x8c84afa0  lw          $a0, -0x5060($a0)
    ctx->pc = 0x101a18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294946720)));
    // 0x101a1c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x101a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x101a20: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x101a20u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x101a24: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x101a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x101a28: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x101a28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x101a2c: 0x821006  srlv        $v0, $v0, $a0
    ctx->pc = 0x101a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x101a30: 0xa4a20006  sh          $v0, 0x6($a1)
    ctx->pc = 0x101a30u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x101a34: 0xa6400030  sh          $zero, 0x30($s2)
    ctx->pc = 0x101a34u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 48), (uint16_t)GPR_U32(ctx, 0));
    // 0x101a38: 0x96460018  lhu         $a2, 0x18($s2)
    ctx->pc = 0x101a38u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x101a3c: 0x96430004  lhu         $v1, 0x4($s2)
    ctx->pc = 0x101a3cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x101a40: 0x96470002  lhu         $a3, 0x2($s2)
    ctx->pc = 0x101a40u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x101a44: 0x636b8  dsll        $a2, $a2, 26
    ctx->pc = 0x101a44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 26);
    // 0x101a48: 0x9644001a  lhu         $a0, 0x1A($s2)
    ctx->pc = 0x101a48u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 26)));
    // 0x101a4c: 0x31d38  dsll        $v1, $v1, 20
    ctx->pc = 0x101a4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 20);
    // 0x101a50: 0x9645000c  lhu         $a1, 0xC($s2)
    ctx->pc = 0x101a50u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x101a54: 0x73bb8  dsll        $a3, $a3, 14
    ctx->pc = 0x101a54u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 14);
    // 0x101a58: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x101a58u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x101a5c: 0x427b8  dsll        $a0, $a0, 30
    ctx->pc = 0x101a5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 30);
    // 0x101a60: 0x52cfc  dsll32      $a1, $a1, 19
    ctx->pc = 0x101a60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 19));
    // 0x101a64: 0xc83025  or          $a2, $a2, $t0
    ctx->pc = 0x101a64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    // 0x101a68: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x101a68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x101a6c: 0x9645001c  lhu         $a1, 0x1C($s2)
    ctx->pc = 0x101a6cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x101a70: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x101a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x101a74: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x101a74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x101a78: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x101a78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x101a7c: 0x9644001e  lhu         $a0, 0x1E($s2)
    ctx->pc = 0x101a7cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 30)));
    // 0x101a80: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x101a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->pc = 0x101a84u;
}
